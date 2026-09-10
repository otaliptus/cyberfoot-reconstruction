// Address: 0046688c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0046688c(int param_1)

{
  int iVar1;
  
  if ((PTR_DAT_0066b7ac[0xd] != '\0') &&
     (iVar1 = CONCAT31((int3)((uint)param_1 >> 8),*(undefined1 *)(param_1 + 0x5f)) + -1,
     (byte)iVar1 < 2)) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}

