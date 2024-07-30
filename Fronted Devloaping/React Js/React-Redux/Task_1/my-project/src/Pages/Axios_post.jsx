import React, { useState } from 'react'
import axios from 'axios'

const Axios_post = () => {

    const data = { fname:" " , email:" " }

    const[inputData, setinputData ] = useState(data);
    console.log(inputData);

    const handleChange = (e) => {
        setinputData({...inputData, [e.target.name]:e.target.value })
    }

    const handleSubmit = (e) => {
         e.preventDefault()
         axios.post('https://jsonplaceholder.typicode.com/users' , inputData)
         .then(Response => console.log(Response))
    } 

    const handleUpdate = (e) => {
        e.preventDefault()
        axios.put('https://jsonplaceholder.typicode.com/users/1' , inputData)
        .then(Response => console.log(Response))
    } 

    const handleDelete = (e) => {
        e.preventDefault()
        axios.delete('https://jsonplaceholder.typicode.com/users/1' , inputData)
        .then(Response => console.log(Response))
    }


    return (
        <div>
            <h1 className='text-white p-4 text-center bg-purple-700' >Axios post / Put / Delete request</h1>
            <div className='h-screen flex justify-center items-center'>
                <form className='w-96 text-white bg-gray-700 p-10'>
                    <div>
                        <label className="block mb-2" htmlFor="fname">
                            First Name:
                            <input
                                type="text"
                                value={inputData.fname}
                                name='fname'
                                id='fname'
                                onChange={handleChange} 
                                className="w-full px-4 py-2 text-black border border-gray-300 rounded"
                            />
                        </label>
                        <label className="block mb-2" htmlFor="email">
                            Email:
                            <input
                                type="text"
                                name="email"
                                id="email"
                                value={inputData.email}
                                onChange={handleChange}
                                className="w-full text-black px-4 py-2 border border-gray-300 rounded"
                            />
                        </label>
                        <button onClick={handleSubmit} type="submit" className="text-white m-2 bg-blue-700 hover:bg-orange-700 focus:ring-4 focus:outline-none focus:ring-blue-300 font-medium rounded-lg text-sm w-full sm:w-auto px-5 py-2.5 text-center dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800">Submit</button>
                        <button  onClick={handleUpdate} type="Update" className="text-white m-2 bg-purple-700 hover:bg-blue-400 focus:ring-4 focus:outline-none focus:ring-blue-300 font-medium rounded-lg text-sm w-full sm:w-auto px-5 py-2.5 text-center dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800">Update</button>
                        <button  onClick={handleDelete} type="delete" className="text-white bg-orange-700 hover:bg-purple-700 focus:ring-4 focus:outline-none focus:ring-blue-300 font-medium rounded-lg text-sm w-full sm:w-auto px-5 py-2.5 text-center dark:bg-blue-600 dark:hover:bg-blue-700 dark:focus:ring-blue-800">Delete</button>
                    </div>
                </form>
            </div>
        </div>
    )
}

export default Axios_post
