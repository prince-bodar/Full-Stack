import React, { useState, useEffect } from 'react';

function UsersList() {
  return (
    <div className="container mx-auto p-4 pt-6 md:p-6 lg:p-12">
      <h1 className="text-3xl font-bold mb-4">Users List</h1>
      <table className="table-auto w-full">
        <thead>
          <tr>
            <th className="px-4 py-2">ID</th>
            <th className="px-4 py-2">First Name</th>
            <th className="px-4 py-2">Last Name</th>
            <th className="px-4 py-2">Age</th>
            <th className="px-4 py-2">Email</th>
          </tr>
        </thead>
          <tbody>
          <tr>
            <th className="px-4 py-2">1</th>
            <th className="px-4 py-2">prince</th>
            <th className="px-4 py-2">Bodar</th>
            <th className="px-4 py-2">18</th>
            <th className="px-4 py-2">bodarprins4@gmail.com</th>
          </tr>
          </tbody>
      </table>
    </div>
  );
}

export default UsersList;