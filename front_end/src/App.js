import React, { useState } from 'react';
import { Redirect, Route, Switch, useHistory } from 'react-router-dom';

import { Home } from './components/HomeScreen';
import SearchPage from './components/Search/SearchPage';
import CommunicationApi from './CommunicationApi';

const App = (props) => {
  let history = useHistory();

  //search term
  const [searchTerm, setSearchTerm] = useState('');
  
  // serach data
  const [searchData, setSearchData] = useState({});
  
  //set search term
  const setSearch = async (term) => {
    setSearchTerm(term);
    await setData(term);
    history.push('/search');
  };
  
  //set search data
  const setData = async (term) => {

    // to do
    //const results = await GetDataFromServer(term);
    const results = "goooooooddddddddddddd";
    setSearchData(results);
  };

  return (
    <Switch>
      <Route
        exact
        path={'/'}
        component={() => <Home setSearch={setSearch} />}
      />
      {searchTerm !== '' ? (
        <Route
          exact
          path={'/search'}
          component={() => (
            <SearchPage
              searchTerm={searchTerm}
              searchData={searchData}
              setSearch={setSearch}
              communicationApi={new CommunicationApi('http://127.0.0.1:8080')}
            />
          )}
        />
      ) : null}
      <Redirect to="/" />
    </Switch>
  );
};

export default App;