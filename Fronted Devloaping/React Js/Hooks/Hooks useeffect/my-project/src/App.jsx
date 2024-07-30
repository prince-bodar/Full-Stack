import React, { useEffect, useState } from 'react'


const App = () => {
   const [count, setCount] = useState(0);

   useEffect( () =>{
     console.log('componet mounted');
   },[count])

   const increment = () => {
     setCount(count+1);
   };

   const Usinguseefact = () =>{
    setCount(count-1);
   }
   return (
     <div className='text-center'>
           <h1 className='text-7xl'>{count}</h1>
           <button className='p-3 m-5 border-2 border-white bg-slate-800 shadow rounded-lg text-white'onClick={increment}>Increment</button>
           <button className='p-3 m-5 border-2 border-white bg-slate-800 shadow rounded-lg text-white'onClick={Usinguseefact}>useEffect</button>
           
       </div>

  );
}

export default App
