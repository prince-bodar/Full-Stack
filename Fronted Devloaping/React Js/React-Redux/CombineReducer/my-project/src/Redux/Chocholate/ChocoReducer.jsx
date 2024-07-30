import { BUY_CHOCHOLATE } from "./ChocoConstatnt"


const intialstate = {
    numOfchocholate: 10
}


const Chocoreducer = (state = intialstate, action) => {
    switch (action.type) {
        case BUY_CHOCHOLATE:
            {

                if (state.numOfchocholate <= 0) {
                    return {
                        ...state,
                        numOfchocholate: ' Stock Is Not Avialable'
                    }
                } else {
                    return {
                        ...state,
                        numOfchocholate: state.numOfchocholate - 1
                    }
                }
            }
        default: return state
    }
}

export default Chocoreducer