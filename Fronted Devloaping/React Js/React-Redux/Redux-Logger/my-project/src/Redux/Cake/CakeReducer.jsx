import { BUY_CAKE } from "./CakeConstant";

const intialstate = {
    numOfcake: 10
}


const Cakereducer = (state = intialstate, action) => {
    switch (action.type) {
        case BUY_CAKE:
            {

                if (state.numOfcake <= 0) {
                    return {
                        ...state,
                        numOfcake:' Stock Is Not Avialable'
                    }
                } else {
                    return {
                        ...state,
                        numOfcake: state.numOfcake - 1
                    }
                }
            }
        default: return state
    }
}

export default Cakereducer