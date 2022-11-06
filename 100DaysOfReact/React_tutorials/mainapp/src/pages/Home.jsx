import React from 'react'
import { testContext } from '../testContext';



function Home() {
  const c = React.useContext(testContext);
  return (
    <div>Home {c}</div>
  )
}

export default Home