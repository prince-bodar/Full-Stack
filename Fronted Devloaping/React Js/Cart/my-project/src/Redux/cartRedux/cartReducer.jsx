import { ADD_TO_CART, REMOVE_TO_CART, EMPTY_CART, INCREMENT_TO_CART, DECREMENT_TO_CART } from "../Constant";

const localStorageData = () => {
    const cartData = localStorage.getItem("cart");
    return cartData ? JSON.parse(cartData) : [];
} 

const cartReducer = (data = localStorageData(), action) => {
    switch (action.type) {
        case ADD_TO_CART:
            const existProduct = data.findIndex(item => item.id === action.data.id);
            if (existProduct !== -1) {
                const updatedData = [...data];
                updatedData[existProduct].Count += 1;
                localStorage.setItem("cart",JSON.stringify(updatedData))
                return updatedData;
            }
            return [{ ...action.data, Count: 1 }, ...data];


        case REMOVE_TO_CART:
            console.warn('RemoveToCartReducer', action)
            // data.length = data.length -1
            // data.length = data.length ? data.length -1 : []
            const reminderItem = data.filter((item) => item.id !== action.data)
            return [...reminderItem]
            
        case EMPTY_CART:

            console.warn('EmptyCartReducer', action)
            return data = []

        case INCREMENT_TO_CART: return {

        }
        case DECREMENT_TO_CART: return {

        }
        default: return data
        
    }
}

export default cartReducer