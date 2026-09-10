// Address: 0041ec60
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0041ec60(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x41ec79;
  cVar2 = FUN_00403c10(param_2,PTR_PTR_0041baa8);
  if (cVar2 != '\0') {
    puStack_18 = (undefined1 *)0x41ec85;
    (**(code **)(*param_1 + 0x20))();
    puStack_1c = &LAB_0041ecde;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_0041ed0c(param_1);
    iVar3 = FUN_0041edb0(param_2);
    if (-1 < iVar3 + -1) {
      iVar6 = 0;
      do {
        uVar4 = FUN_0041edb8(param_2,iVar6);
        piVar5 = (int *)FUN_0041ec40(param_1);
        (**(code **)(*piVar5 + 8))(piVar5,uVar4);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    puVar1 = puStack_18;
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x41ecef;
    puStack_1c = (undefined1 *)0x41ecdd;
    (**(code **)(*param_1 + 0x24))(param_1,*param_1,puVar1);
    return;
  }
  puStack_18 = (undefined1 *)0x41ecef;
  FUN_0041e66c(param_1,param_2);
  return;
}

