// Address: 00401730
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00401730(LPVOID param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  LPVOID lpAddress;
  BOOL BVar2;
  undefined4 *puVar3;
  LPVOID local_1c;
  uint local_18;
  
  local_1c = (LPVOID)0xffffffff;
  local_18 = 0;
  puVar1 = DAT_0066c5ec;
  while (puVar3 = puVar1, (undefined4 **)puVar3 != &DAT_0066c5ec) {
    puVar1 = (undefined4 *)*puVar3;
    lpAddress = (LPVOID)puVar3[2];
    if ((param_1 <= lpAddress) &&
       ((uint)((int)lpAddress + puVar3[3]) <= (uint)(param_2 + (int)param_1))) {
      if (lpAddress < local_1c) {
        local_1c = lpAddress;
      }
      if (local_18 < (uint)((int)lpAddress + puVar3[3])) {
        local_18 = (int)lpAddress + puVar3[3];
      }
      BVar2 = VirtualFree(lpAddress,0,0x8000);
      if (BVar2 == 0) {
        DAT_0066c5c8 = 1;
      }
      FUN_00401538(puVar3);
    }
  }
  *param_3 = 0;
  if (local_18 != 0) {
    *param_3 = local_1c;
    param_3[1] = local_18 - (int)local_1c;
  }
  return;
}

