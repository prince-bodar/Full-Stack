const redux = require('redux');
const createStore = redux.createStore

// constant

const BUY_ICECREAM = "BUY_ICECREAM";

// Action 

const buy_icecream = () => {
    return{
        type:BUY_ICECREAM,
        info:'First Redux Action'
    }
}

// initialstate

const initialstate = {
    numOficecream:10
}

// Reducer

const IcecreamReducer = (state = initialstate,action) =>{
    switch (action.type) {
        case BUY_ICECREAM:
            return{
                numOficecream:state.numOficecream -1
            }
        default:return state
    }

}

const store = createStore(IcecreamReducer)

console.log('initialstate',store.getState());

const unsubscribe = store.subscribe(() => console.log('Update State',store.getState()))

store.dispatch(buy_icecream())
store.dispatch(buy_icecream())
store.dispatch(buy_icecream())

unsubscribe()