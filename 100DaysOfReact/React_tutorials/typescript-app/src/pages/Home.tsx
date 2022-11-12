import React from 'react'
import { useDispatch, useSelector } from 'react-redux'

function Home() {
  const username = useSelector((state: any) => state.user.value.username)
  return (
    <div>
      <h1>
      welcome {username}
      </h1>
    </div>
  )
}

export default Home