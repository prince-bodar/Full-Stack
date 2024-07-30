import { combineReducers } from "redux";
import Cakereducer from "./Cake/CakeReducer";
import Chocoreducer from "./Chocholate/ChocoReducer";

const rootReducer = combineReducers(
    {
       Cakereducer,
       Chocoreducer
    }
)