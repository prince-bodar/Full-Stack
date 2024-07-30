import React from 'react'
import axios from 'axios'
import { useState, useEffect } from 'react'

const Axios_get = () => {
    const [data, setdata] = useState([])
    useEffect(() => {
        axios.get('https://jsonplaceholder.typicode.com/users')
            .then(response => setdata(response.data))
    }, [])
    return (
        <div className='flex flex-wrap'>
            {
                data.map(item => {
                    return (

                        <div key={item.id} className='w-full sm:w-80 h-32  sm:m-10 text-xl border-2 border-solid border-r-black shadow-2xl p-7'>
                            <div className='mx-2'>{item.name}</div>
                            <span className='ml-2'>{item.email}</span>
                        </div>


                    )
                })
            }
        </div>
    )
}

export default Axios_get
