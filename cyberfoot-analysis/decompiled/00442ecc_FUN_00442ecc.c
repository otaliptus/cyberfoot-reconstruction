// Address: 00442ecc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00442ecc(int *param_1,int param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x442ee4;
  cVar3 = FUN_00403c10(param_2,PTR_PTR_004421b8);
  if (cVar3 != '\0') {
    if ((int *)param_1[1] != (int *)0x0) {
      puStack_14 = (undefined1 *)0x442ef9;
      (**(code **)(*(int *)param_1[1] + 0x20))();
    }
    puStack_18 = &LAB_00442f47;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_14 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x20))(param_1,*(undefined4 *)(param_2 + 0x10));
    (**(code **)(*param_1 + 0x28))(param_1,*(undefined4 *)(param_2 + 0x18));
    (**(code **)(*param_1 + 0x24))(param_1,*(undefined4 *)(param_2 + 0x14));
    puVar2 = puStack_14;
    *in_FS_OFFSET = uStack_1c;
    puStack_14 = (undefined1 *)0x442f4e;
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      puStack_18 = (undefined1 *)0x442f46;
      (**(code **)(*piVar1 + 0x24))(piVar1,*piVar1,puVar2);
    }
    return;
  }
  return;
}

