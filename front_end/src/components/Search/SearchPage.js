import React from 'react';

import SearchPageData      from './SearchPageData';
import HeaderSearchPage    from './HeaderSearchPage';
import SubHeaderSearchPage from './SubHeaderSearchPage';

const SearchPage = ({ searchTerm, searchData, setSearch }) => {
  return (
    <div className="search-page">
      <HeaderSearchPage searchTerm={searchTerm} setSearch={setSearch} />
      <SubHeaderSearchPage />
      <SearchPageData data={searchData} />
    </div>
  );
};

export default SearchPage;
