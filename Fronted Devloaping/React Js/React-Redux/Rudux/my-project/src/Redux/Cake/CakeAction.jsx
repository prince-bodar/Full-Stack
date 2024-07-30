import { BUY_CAKE } from "./CakeConstant";
import { BUY_CHOCHOLATE } from "./CakeConstant";

export function buy_cake(){
    return{
        type:BUY_CAKE
    }
}

export function buy_chocholate(){
    return{
        type:BUY_CHOCHOLATE
    }
}