import React from 'react'
import './App.css'
import Home from './Pages/Home'
import AboutUs from './Pages/AboutUs'
import ContactUs from './Pages/ContactUs'
import Shop from './Pages/Shop'
import Edit from './Pages/Edit'
import Add from './Pages/Add'
import {BrowserRouter , Routes , Route} from 'react-router-dom'
import Navbar from './components/Navbar'


const App = () => {
  return (
    <BrowserRouter>
      <Navbar/>
      <Routes>
        <Route path="/" element={<Home/>}></Route>
        <Route path="/aboutus" element={<AboutUs/>}></Route>
        <Route path="/shop" element={<Shop/>}></Route>
        <Route path="/contactus" element={<ContactUs/>}></Route>
        <Route path="/edit/:id" element={<Edit/>}></Route>
        <Route path=":id" element={<Edit/>}></Route>
        <Route path="/add" element={<Add/>}></Route>
      </Routes>
    </BrowserRouter>
  )
}

export default App