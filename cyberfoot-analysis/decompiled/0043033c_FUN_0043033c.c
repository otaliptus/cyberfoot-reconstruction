// Address: 0043033c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0043033c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(short *)(iVar1 + 0x28) == 1) && (*(short *)(iVar1 + 0x2a) == 1)) {
    return CONCAT31((int3)((uint)(iVar1 + 0x18) >> 8),1);
  }
  return 0;
}

