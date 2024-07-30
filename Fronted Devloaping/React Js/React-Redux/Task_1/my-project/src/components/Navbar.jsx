import React from 'react';

const Navbar = () => {
  return (
    <nav className="bg-gray-800 p-4">
      <div className="container mx-auto flex justify-between items-center">
        <h1 className="text-white text-2xl font-bold">CRUD App</h1>
        <ul className="flex space-x-4">
          <li><a href="#home" className="text-white">Home</a></li>
          <li><a href="#users" className="text-white">Users</a></li>
        </ul>
        <div>
          <input
            type="text"
            placeholder="Search users..."
            className="w-full px-4 py-2 border border-gray-300 rounded-md shadow-sm focus:outline-none focus:ring-indigo-500 focus:border-indigo-500 sm:text-sm"
          />
        </div>
      </div>
    </nav>
  );
};

export default Navbar;
