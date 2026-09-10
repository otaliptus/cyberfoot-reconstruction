// Address: 0051f8a4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0051f8a4(int param_1,int *param_2,int *param_3,char param_4,char param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar7;
  undefined4 uVar8;
  HDC pHVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 in_stack_ffffffa0;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  HGDIOBJ local_10;
  HDC local_c;
  int *local_8;
  
  local_8 = param_2;
  if ((param_5 != '\0') && (*(char *)(param_1 + 0x34) != '\0')) {
    puStack_30 = (undefined1 *)0x51f8d2;
    cVar1 = FUN_0051d49c(param_1);
    if (cVar1 != '\0') {
      local_10 = (HGDIOBJ)0x0;
      local_c = (HDC)0x0;
      puStack_34 = &LAB_0051fac1;
      uStack_38 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_38;
      puStack_30 = &stack0xfffffffc;
      CreateCompatibleDC((HDC)0x0);
      local_c = (HDC)FUN_00516840();
      local_10 = SelectObject(local_c,*(HGDIOBJ *)(param_1 + 0xc));
      if (param_4 == '\0') {
        iVar6 = *param_3;
        FUN_0051ded0(param_1);
        FUN_00430280();
        uVar3 = FUN_0042b5a8();
        uVar10 = 0;
        uVar8 = 0;
        uVar2 = FUN_0051d4c8(param_1,3);
        uVar2 = uVar2 & 0xffff;
        uVar4 = FUN_0051d4c8(param_1,4);
        uVar4 = uVar4 & 0xffff;
        uVar7 = 0;
        in_stack_ffffffa0 = 0;
        pHVar9 = local_c;
        uVar5 = FUN_0042b5a8(local_8);
        FUN_0051f454(uVar5,iVar6,param_3[1],in_stack_ffffffa0,uVar7,pHVar9,uVar4,uVar2,uVar8,uVar10,
                     uVar3);
      }
      else {
        uVar2 = FUN_0051d4c8(param_1,1);
        local_20 = (uVar2 & 0xffff) + *param_3;
        uVar2 = FUN_0051d4c8(param_1,3);
        local_18 = (uVar2 & 0xffff) + local_20;
        while (local_20 < param_3[2]) {
          uVar2 = FUN_0051d4c8(param_1,2);
          local_1c = (uVar2 & 0xffff) + param_3[1];
          uVar2 = FUN_0051d4c8(param_1,4);
          local_14 = (uVar2 & 0xffff) + local_1c;
          while (local_1c < param_3[3]) {
            FUN_0051d4c8(param_1,3);
            FUN_0051d4c8(param_1,4);
            FUN_0051ded0(param_1);
            FUN_00430280();
            uVar3 = FUN_0042b5a8();
            uVar11 = 0;
            uVar10 = 0;
            uVar2 = FUN_0051d4c8(param_1,3);
            uVar2 = uVar2 & 0xffff;
            uVar4 = FUN_0051d4c8(param_1,4);
            uVar4 = uVar4 & 0xffff;
            uVar8 = 0;
            uVar7 = 0;
            pHVar9 = local_c;
            uVar5 = FUN_0042b5a8(local_8);
            FUN_0051f454(uVar5,local_20,local_1c,uVar7,uVar8,pHVar9,uVar4,uVar2,uVar10,uVar11,uVar3)
            ;
            iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
            local_1c = local_1c + iVar6;
            iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
            local_14 = local_14 + iVar6;
          }
          iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
          local_20 = local_20 + iVar6;
          iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
          local_18 = local_18 + iVar6;
        }
      }
      (**(code **)(*local_8 + 0xc))();
      *in_FS_OFFSET = in_stack_ffffffa0;
      if (local_10 != (HGDIOBJ)0x0) {
        SelectObject(local_c,local_10);
      }
      if (local_c != (HDC)0x0) {
        DeleteDC(local_c);
      }
      return;
    }
  }
  if (param_4 == '\0') {
    puStack_30 = (undefined1 *)0x51fb7d;
    uVar3 = FUN_0051ded0(param_1);
    puStack_30 = (undefined1 *)0x51fb89;
    FUN_0042b20c(local_8,param_3,uVar3);
  }
  else {
    puStack_30 = (undefined1 *)0x51fade;
    uVar2 = FUN_0051d4c8(param_1,1);
    local_20 = (uVar2 & 0xffff) + *param_3;
    puStack_30 = (undefined1 *)0x51faf1;
    uVar2 = FUN_0051d4c8(param_1,3);
    local_18 = (uVar2 & 0xffff) + local_20;
    while (local_20 < param_3[2]) {
      puStack_30 = (undefined1 *)0x51fb07;
      uVar2 = FUN_0051d4c8(param_1,2);
      local_1c = (uVar2 & 0xffff) + param_3[1];
      puStack_30 = (undefined1 *)0x51fb1c;
      uVar2 = FUN_0051d4c8(param_1,4);
      local_14 = (uVar2 & 0xffff) + local_1c;
      while (local_1c < param_3[3]) {
        puStack_30 = (undefined1 *)0x51fb2e;
        uVar3 = FUN_0051ded0(param_1);
        puStack_30 = (undefined1 *)0x51fb3a;
        FUN_0042b20c(local_8,&local_20,uVar3);
        puStack_30 = (undefined1 *)0x51fb42;
        iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
        local_1c = local_1c + iVar6;
        puStack_30 = (undefined1 *)0x51fb4d;
        iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x20))();
        local_14 = local_14 + iVar6;
      }
      puStack_30 = (undefined1 *)0x51fb60;
      iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
      local_20 = local_20 + iVar6;
      puStack_30 = (undefined1 *)0x51fb6a;
      iVar6 = (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
      local_18 = local_18 + iVar6;
    }
  }
  return;
}

