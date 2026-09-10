// Address: 00510f14
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00510f14(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_20 [4];
  
  iVar6 = 0;
  FUN_0050f004(param_1,local_20);
  iVar7 = local_20[0] - *(int *)(*(int *)(param_1 + 0x238) + 0x2c);
  while( true ) {
    piVar8 = local_20;
    iVar4 = FUN_0050ae9c(*(undefined4 *)(param_1 + 0x4d4));
    if (iVar4 <= iVar6) break;
    iVar4 = FUN_00465c0c(param_1);
    if (iVar4 <= iVar7) break;
    iVar4 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar6);
    if (*(char *)(iVar4 + 0xa9) != '\0') {
      iVar4 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar6);
      iVar7 = iVar7 + *(int *)(iVar4 + 0xb0);
      iVar4 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar6);
      if (-1 < *(int *)(iVar4 + 0xb0) + iVar7) {
        if (*(char *)(param_1 + 0x28c) == '\0') {
LAB_00510f91:
          uVar2 = 0;
        }
        else {
          cVar1 = FUN_004e4b0c();
          if (cVar1 == '\0') goto LAB_00510f91;
          uVar2 = 1;
        }
        iVar4 = *(int *)(param_1 + 0x278);
        *(undefined1 *)(iVar4 + 0xe) = uVar2;
        uVar3 = *(undefined4 *)(param_1 + 0x208);
        *(undefined4 *)(iVar4 + 8) = uVar3;
        FUN_0042b4a4(uVar3,*(undefined4 *)(param_1 + 0x68));
        uVar3 = FUN_0050b02c(*(undefined4 *)(param_1 + 0x4d4),iVar6);
        FUN_0050aa0c(uVar3,1,local_20);
        (**(code **)(**(int **)(param_1 + 0x278) + 0x34))(*(int **)(param_1 + 0x278),uVar3,local_20)
        ;
      }
    }
    iVar6 = iVar6 + 1;
  }
  iVar6 = FUN_00465c0c(param_1);
  if (iVar7 < iVar6) {
    FUN_0042ab6c(*(undefined4 *)(*(int *)(param_1 + 0x208) + 0x14),*(undefined4 *)(param_1 + 0x70));
    uVar3 = *(undefined4 *)(param_1 + 0x2c0);
    uVar5 = FUN_00465c0c(param_1);
    FUN_0040709c(iVar7,0,uVar5,piVar8,uVar3);
    FUN_0042af8c(*(undefined4 *)(param_1 + 0x208),local_20);
  }
  return;
}

