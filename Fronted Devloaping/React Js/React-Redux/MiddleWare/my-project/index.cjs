// Redux MiddleWare

const { applyMiddleware } = require("redux");
const redux = require("redux");
const reduxLogger = require('redux-logger');

const createStore = redux.createStore;
const logger = reduxLogger.createLogger();

// constant

const BUY_ICECREAM = "BUY_ICECREAM";

//  Action

const buy_icecream = () => {
  return {
    type: BUY_ICECREAM,
  };
};

// initialstate

const initialstate = {
  numOficecream: 10,
};

// Reducer

const reducer = (state = initialstate, action) => {
  switch (action.type) {
    case BUY_ICECREAM:
      return {
        ...state,
        numOficecream: state.numOficecream,
      };
    default:
      return state;
  }
};

const store = createStore(reducer, applyMiddleware(logger));

  console.log("initialstate", store.getState());

 store.subscribe(() => console.log('Upadted Is ',store.getState()));

 store.dispatch(buy_icecream());
