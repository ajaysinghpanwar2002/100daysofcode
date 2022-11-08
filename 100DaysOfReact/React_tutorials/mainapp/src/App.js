import React from 'react'
import { useState, createContext } from 'react';
import { BrowserRouter as Router, Routes, Route } from "react-router-dom";
import { QueryClient, QueryClientProvider } from "@tanstack/react-query"
// Pages
import Home from "../src/pages/Home"
// import Counter from './components/Counter'
// import Counter2 from './components/Counter2'
// import Counter3 from './components/Counter3'
// import Counter4 from './components/Counter4'
// import Jobinfo from './components/Jobinfo'
// import Ternary from './components/Ternary'
// import Lists from './components/Lists'
// import State from './hooks/State'
// import Planets from './components/Planets'
// import Counter5 from './components/Counter5'
// import Crud from './crud/Crud'
// import Effect from './hooks/Effect'
// import Api from './Api'
import PredictAge from './components/PredictAge'
import Excuses from './components/Excuses'
import Nationalize from './components/Nationalize'
import Form from './components/Form';
import { testContext } from './testContext';
import Person  from './typescript/Person';
export default function App() {
  const client = new QueryClient()
  return (
    <testContext.Provider value={"testContextsss"}>
      <QueryClientProvider client={client}>

        <Router>
          <Routes>
            <Route path='/' element={<Home />} />
            <Route path='/nationality' element={<Nationalize />} />
            <Route path='/excuses' element={<Excuses />} />
            <Route path='/age' element={<PredictAge />} />
            <Route path='/form' element={<Form />} />
            <Route path = '/person' element={<Person
            name= 'ajay'
            email = 'ajaysingh@gmail.com'
            age = {20}
            isMarried={false}
            friends = {["ankit","dips","vikram"]}
            
            />}/>
          </Routes>
        </Router>
      </QueryClientProvider>
      {/* <Counter /> */}
      {/* <Counter2 /> */}
      {/* <Counter3 /> */}
      {/* <Counter4 /> */}
      {/* <Jobinfo salary={900} position="senior sde" company="amazon" /> */}
      {/* <Ternary/> */}
      {/* <Lists/> */}
      {/* <Planets/> */}
      {/* <State/> */}
      {/* <Counter5/> */}
      {/* <Crud/> */}
      {/* <Effect/> */}
      {/* <Api/> */}
      {/* <PredictAge/> */}
      {/* <Excuses /> */}
      {/* <Nationalize/> */}

    </testContext.Provider>
  )
}