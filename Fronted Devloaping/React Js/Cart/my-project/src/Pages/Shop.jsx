import React from 'react'
import { addToCart } from '../Redux/cartRedux/cartAction'
import { useSelector, useDispatch } from 'react-redux'
import { useEffect } from 'react'
import { ProductList } from '../Redux/productRedux/productAction'

const Shop = () => {
  const dispatch = useDispatch()
  const shopData = useSelector(state => state.product)
  console.log("shopData", shopData);
  const data = shopData.flat(10)

  useEffect(() => {
    dispatch(ProductList())
  }, [])

  return (
    <div>
      <h1 className='title'>This is Shop Page</h1>
      <div className='mt-10 grid lg:grid-cols-4 grid-cols-2 slg:grid-cols-3 justify-center item center'>
      {
        data.map((item) => {
          return (
            <div className='w-32 vsm:w-40 lmd:w-72 mx-auto my-4 text-center  '>
              <div>
              <div >
                <div>
                  <img className='w-32 vsm:w-40 lmd:w-72 h-36 vsm:h-40 lmd:h-72' src={item.image} alt="" />
                
                </div>
                <div>
                  <p className='text-md font-medium text-gray-800'>{item.title}</p>
                  <p className=' vsm:text-md text-gray-800 mt-2'>${item.price}</p>
                  <button className='btn' onClick={() => dispatch(addToCart(item))}>
                        Add to Cart
                 </button>
                </div>
                </div>
              </div>
            </div>)
        })
      }
      </div>
    </div>
  )
}

export default Shop