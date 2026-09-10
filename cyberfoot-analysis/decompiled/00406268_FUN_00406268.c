// Address: 00406268
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00406268(int param_1)

{
  int iVar1;
  CHAR local_110 [264];
  
  if (*(int *)(param_1 + 0x10) == 0) {
    GetModuleFileNameA(*(HMODULE *)(param_1 + 4),local_110,0x105);
    iVar1 = FUN_004064a4(local_110,1);
    *(int *)(param_1 + 0x10) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 4);
    }
  }
  return *(undefined4 *)(param_1 + 0x10);
}

