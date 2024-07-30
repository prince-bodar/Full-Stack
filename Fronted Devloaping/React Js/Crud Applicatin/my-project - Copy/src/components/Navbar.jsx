import React from 'react'
import { Link  , NavLink} from 'react-router-dom'

// NavLink 

const Navbar = () => {
    return (
        <div className='bg-gray-500 text-white p-4'>
            <div className="flex justify-around items-center">
                <div>
                    <Link to="/">
                        <span className='text-2xl'>DEPOT</span>
                    </Link>
                </div>
                <div>
                    <nav>
                        <ul className="flex space-x-16">
                            <li>
                                <NavLink className='text-sm' to="/">Home</NavLink>
                            </li>
                            <li>
                                <NavLink className='text-sm' to="/aboutus">AboutUs</NavLink>
                            </li>
                            <li>
                                <NavLink className='text-sm' to="/shop">Shop</NavLink>
                            </li>
                            <li>
                                <NavLink className='text-sm' to="/contactus">ContactUs</NavLink>
                            </li>
                        </ul>
                    </nav>
                </div>
                <div>
                <input
            className="flex h-10 w-[250px] rounded-md bg-gray-100 px-3 py-2 text-sm placeholder:text-gray-600 focus:outline-none focus:ring-1 focus:ring-black/30 focus:ring-offset-1 disabled:cursor-not-allowed disabled:opacity-50"
            type="text"
            placeholder="Search Users"
          ></input>
                </div>
            </div>
        </div>
    )
}

export default Navbar