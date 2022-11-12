import React from 'react';
import { Link } from 'react-router-dom'
import { BrowserRouter as Router, Routes, Route } from "react-router-dom"
import { Provider } from 'react-redux';
import './App.css';
import Contact from './pages/Contact';
import Home from './pages/Home';
import Login from './pages/Login';
import { store } from './store';

function App() {
  return (
    <div className="App">
      <header className="App-header">
        <Provider store={store}>
          <Router>
            <Link to ='/' >Home</Link>
            <Link to ='/login' >Login</Link>
            <Link to ='/contact' >Contact</Link>

            <Routes>
              <Route path="/" element={<Home />} />
              <Route path="/login" element={<Login />} />
              <Route path="/contact" element={<Contact />} />
            </Routes>
          </Router>
        </Provider>
      </header>
    </div>
  );
}

export default App;
