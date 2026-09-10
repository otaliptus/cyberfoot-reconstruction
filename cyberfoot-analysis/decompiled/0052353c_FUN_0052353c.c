// Address: 0052353c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

int FUN_0052353c(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_14 [16];
  
  cVar1 = (**(code **)(*param_1 + 0x1c))();
  if (cVar1 == '\0') {
    iVar2 = param_1[0x14];
    if (iVar2 == 0) {
      iVar2 = FUN_0042fcb8(PTR_PTR_00429378,1);
      param_1[0x14] = iVar2;
      *(int **)(iVar2 + 0x14) = param_1;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(*param_1 + 0x10);
      iVar3 = FUN_0051aad8(param_1[0xb]);
      if (0 < iVar3) {
        uVar4 = FUN_005212bc(param_1[0xb],0);
        uVar5 = FUN_0051d4c8(uVar4,3);
        uVar6 = (**(code **)(*param_1 + 0x2c))();
        if ((uVar5 & 0xffff) == uVar6) {
          uVar4 = FUN_005212bc(param_1[0xb],0);
          uVar5 = FUN_0051d4c8(uVar4,4);
          uVar6 = (**(code **)(*param_1 + 0x20))();
          if ((uVar5 & 0xffff) == uVar6) {
            FUN_005212bc(param_1[0xb],0);
            uVar4 = FUN_0051ded0();
            (**(code **)(*(int *)param_1[0x14] + 8))((int *)param_1[0x14],uVar4);
            return iVar2;
          }
        }
        (**(code **)(*param_1 + 0x24))();
        uVar4 = FUN_0042fa48();
        (**(code **)(*(int *)param_1[0x14] + 0x38))((int *)param_1[0x14],uVar4);
        uVar4 = (**(code **)(*param_1 + 0x20))();
        (**(code **)(*(int *)param_1[0x14] + 0x34))((int *)param_1[0x14],uVar4);
        uVar4 = (**(code **)(*param_1 + 0x2c))();
        (**(code **)(*(int *)param_1[0x14] + 0x40))((int *)param_1[0x14],uVar4);
        uVar9 = 0;
        uVar8 = 0;
        uVar4 = FUN_00430280(param_1[0x14]);
        FUN_0042b584(uVar4,local_14);
        uVar4 = FUN_005212bc(param_1[0xb],0);
        uVar7 = FUN_00430280(param_1[0x14]);
        FUN_0051f850(uVar4,uVar7,local_14,uVar8,uVar9);
      }
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

