// for communicating with back end
class CommunicationApi {

    constructor(serviceAddress) {
        this.serviceAddress = serviceAddress; 
    }

    makeURL(term) {
        return new URL(term, this.serviceAddress);
    }

    search(term, handler) {
        fetch(this.makeURL(term))
            .then(res => res.json())
            .then( (response) => {
               handler(response["result"]);
            },
            (err) => {
                handler(err);
                console.log(err);
            }
            );
    }
}

export default CommunicationApi;