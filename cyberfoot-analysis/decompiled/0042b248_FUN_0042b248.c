// Address: 0042b248
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0042b248(int param_1)

{
  HDC hdc;
  undefined4 uVar1;
  tagPOINT *lppoint;
  tagPOINT local_10;
  
  lppoint = &local_10;
  uVar1 = 0;
  if ((*(byte *)(param_1 + 0x54) & 0x80) != 0) {
    hdc = (HDC)FUN_0042b5a8(param_1);
    GetWindowOrgEx(hdc,lppoint);
    if (local_10.x != 0) {
      uVar1 = 1;
    }
  }
  return uVar1;
}

