//make a form using react js and css
//connect form.jsk with App,css and index.js

import React, { useState } from 'react';
import './App.css';
function Form() {
    const [name, setName] = useState('');
    const [email, setEmail] = useState('');
    const [message, setMessage] = useState('');
    const handleSubmit = (e) => {
        e.preventDefault();
        alert(`Name: ${name}\nEmail: ${email}\nMessage: ${message}`);
    }
    return (
        <form onSubmit={handleSubmit} className="form">
            <h2>Contact Us</h2>
            <label>Name:</label>
            <input type="text" value={name} onChange={(e) => setName(e.target.value)} required />
            <label>Email:</label>
            <input type="email" value={email} onChange={(e) => setEmail(e.target.value)} required />
            <label>Message:</label>
            <textarea value={message} onChange={(e) => setMessage(e.target.value)} required></textarea>
            <button type="submit">Submit</button>
        </form>
    );
}
export default Form;
