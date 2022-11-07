import React from 'react'
import Axios from 'axios';
import { testContext } from '../testContext';

import {useQuery} from "@tanstack/react-query"

function Home() {
  const c = React.useContext(testContext);

  const {data: catdata, isLoading,isError,refetch} = useQuery(["cat"],()=>{
    Axios.get("https://catfact.ninja/fact").then((res)=>res.data);
  })

  if(isLoading){
    return(
      <h1>Loading</h1>
    )
  }
  if(isError){
    return(
      <h1>Sorry we were down </h1>
    )
  }

  return (
    <div>Home {c}
    {catdata?.fact}
    <button onClick={refetch}>Update data</button>
    </div>
  )
}

export default Home