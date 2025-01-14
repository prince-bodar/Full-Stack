import {applyMiddleware, createStore} from "redux"
import { composeWithDevTools } from "redux-devtools-extension"
import logger from "redux-logger"

const store = createStore(composeWithDevTools(applyMiddleware(logger)))

export default store
