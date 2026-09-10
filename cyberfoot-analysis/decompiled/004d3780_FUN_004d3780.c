// Address: 004d3780
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004d3780(undefined4 param_1)

{
  undefined4 uVar1;
  HANDLE hFindFile;
  undefined4 uVar2;
  byte local_258 [592];
  
  uVar2 = 0;
  uVar1 = FUN_00405250(param_1);
  hFindFile = (HANDLE)FUN_004d4068(uVar1,local_258);
  if (hFindFile != (HANDLE)0xffffffff) {
    FindClose(hFindFile);
    if ((local_258[0] & 0x10) == 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

