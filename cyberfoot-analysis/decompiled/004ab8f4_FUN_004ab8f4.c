// Address: 004ab8f4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

undefined4 FUN_004ab8f4(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined3 uVar3;
  
  if (*(int *)(*(int *)(param_1 + 0x138) + 8) != 0) {
    uVar2 = FUN_004a63ac(*(undefined4 *)(param_1 + 0x138),0);
    uVar2 = FUN_00403c10(uVar2,PTR_PTR_004a55e0);
    if ((char)uVar2 != '\0') {
      uVar3 = (undefined3)((uint)uVar2 >> 8);
      uVar1 = 1;
      goto LAB_004ab931;
    }
  }
  uVar1 = 0;
  uVar3 = 0;
LAB_004ab931:
  return CONCAT31(uVar3,uVar1);
}

