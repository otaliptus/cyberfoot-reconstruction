// Address: 00478724
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_00478724(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  for (iVar1 = *(int *)(param_1 + 100); (iVar1 != 0 && (*(int *)(iVar1 + 0x7c) == 0));
      iVar1 = *(int *)(iVar1 + 100)) {
  }
  if (iVar1 == 0) {
    iVar1 = thunk_FUN_0047910c();
    if (iVar1 != 0) {
      uVar2 = *(undefined4 *)(iVar1 + 0x48);
    }
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x7c);
  }
  return uVar2;
}

