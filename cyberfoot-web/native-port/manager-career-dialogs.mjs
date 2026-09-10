import {createManagerDialogs} from './manager-dialogs.mjs';
import {createManagerOfferHost} from './manager-offer-host.mjs';
import {createStandingsHost} from './standings-host.mjs';
/** Career manager dialogs on a StandingsWindow-capable renderer. All modal
 * promises resolve only after the player's decision or original timer. */
export function createManagerCareerDialogs(renderer,options){
 const changes=createManagerDialogs(renderer,options),standings=createStandingsHost(renderer,options),offer=createManagerOfferHost(renderer,{...options,showStandings:()=>standings.open()});
 return {...changes,standings,offer,showOffer:()=>offer.open(),dispose:()=>{offer.dispose();standings.dispose();changes.dispose();}};
}
