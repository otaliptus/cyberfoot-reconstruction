// Address: 0047910c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_0047910c(int param_1)

{
  int iVar1;
  
  do {
    iVar1 = param_1;
    param_1 = *(int *)(iVar1 + 100);
  } while (param_1 != 0);
  return *(undefined4 *)(iVar1 + 0x70);
}

