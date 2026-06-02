import '/.App.jsx'
import '/App.css'
import {route,Routes} from "react-router-dom"
import home from "./home"
import about from "./about"
import contact from "./contact"
import React from 'react'
const Navbar = () => {
  return (
    <div>
        <nav>
            <li>Home</li>
            <li>About</li>
            <li>Contact</li>
        </nav>
    </div>
  )
}
export default Navbar
