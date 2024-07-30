import React, { useState } from 'react'

const Counter_1 = () => {
    const [count, setCount] = useState(0);

    const increment = () => {
      setCount(count+1);
    };
  
    const decrement = () => {
    if (count>0) {
      setCount(count-1);
    }
    };
  
    return (
      <div className='text-center'>
        <h1 className='text-7xl'>{count}</h1>
        <button className='p-3 m-5 border-2 border-white bg-slate-800 shadow rounded-lg text-white'onClick={increment}>Increment</button>
        <button className='p-3 m-5 border-2 border-white bg-slate-800 shadow rounded-lg text-white' onClick={decrement}>Decrement</button>
      </div>
    );
}

export default Counter_1
