import React, { useState } from 'react';
import Navbar from './components/Navbar';
import UserForm from './components/UserForm';
import UserList from './components/UserList';
import Axios_get from './Pages/Axios_get';
import Axios_post from './Pages/Axios_post';

function App() {
  return (
    <div>
      <Navbar />
      <div className="container mx-auto p-4" id="home">
        <h1 className="text-2xl font-bold text-center">CRUD Application</h1>
      </div>
      {/* <Axios_post/> */}
      {/* <Axios_get/> */}
      <UserForm />
      <UserList />
    </div>
  );
}

export default App;
