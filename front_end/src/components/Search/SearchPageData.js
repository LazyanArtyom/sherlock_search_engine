import React from 'react';

const SearchPageData = ({ data }) => {
  return (
    <div className="container search-page-data px-5">
      <div className="row px-1">
        <div className="col-md-12 py-3">
          <div>this is search page data {JSON.stringify(data)}</div>
        </div>
      </div>
    </div>
  );
};

export default SearchPageData;
