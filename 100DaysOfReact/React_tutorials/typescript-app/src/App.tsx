import React from 'react';
import {BrowserRouter as Router,Routes,Route} from "react-router-dom"

import './App.css';
import Contact from './pages/Contact';
import Home from './pages/Home';
import Login from './pages/Login';

function App() {
  return (
    <div className="App">
      <header className="App-header">
      <Router>
        <Routes>
          <Route path="/" element={<Home/>}/>
          <Route path="/login" element={<Login/>}/>
          <Route path="/contact" element={<Contact/>}/>
        </Routes>
      </Router>
      </header>
    </div>
  );
}

export default App;
