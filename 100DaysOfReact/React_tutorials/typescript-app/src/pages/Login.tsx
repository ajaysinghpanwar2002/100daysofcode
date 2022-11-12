import React from 'react'
import { logIn, logOut } from '../store'
import { useDispatch, useSelector } from 'react-redux'
import { useState } from "react"


function Login() {
  const [newuserName, setNewUserName] = useState("")

  const dispatch = useDispatch();
  const username = useSelector((state: any) => state.user.value.username)
  return (
    <div>
      {username}
      <input
        onChange={(e) => {
          setNewUserName(e.target.value);
        }}
      />
      <button
        onClick={() => dispatch(logIn({ username: newuserName }))}
      >LogIn</button>
      <button
        onClick={() => dispatch(logOut())}
      >LogOut</button>
    </div>
  )
}

export default Login