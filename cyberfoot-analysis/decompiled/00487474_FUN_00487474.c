// Address: 00487474
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00487474(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x487487;
  piVar3 = (int *)(**(code **)(param_2 + -0xc))();
  *param_3 = piVar3;
  puStack_1c = &LAB_004874b2;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  (**(code **)(*piVar3 + 0x2c))(piVar3,0xffffffff,param_1);
  puVar1 = puStack_18;
  *in_FS_OFFSET = uStack_20;
  if (*(int *)(param_1 + 0x44) == 0) {
    puStack_18 = (undefined1 *)0x4874db;
    cVar2 = FUN_00403c10(piVar3,PTR_PTR_0047ce6c,puVar1);
    if (cVar2 != '\0') {
      puStack_18 = (undefined1 *)0x4874e8;
      FUN_0046cabc(piVar3);
      *(int **)(param_1 + 0x44) = piVar3;
    }
  }
  return;
}

