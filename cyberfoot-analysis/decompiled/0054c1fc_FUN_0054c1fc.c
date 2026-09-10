// Address: 0054c1fc
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_0054c1fc(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar6 = 6;
  do {
    local_8 = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_20 = &LAB_0054c44d;
  local_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_24;
  local_28 = 0x54c229;
  FUN_0046ba68(param_1,param_2);
  uVar3 = (undefined1)*(undefined2 *)(param_2 + 4);
  if (*(char *)(param_1 + 0x2b4) == '\0') {
    local_28 = 0x54c247;
    FUN_00404abc(param_1 + 0x2c4,uVar3);
  }
  else {
    local_28 = 0x54c254;
    FUN_00404abc(&stack0xfffffff0,uVar3);
    local_28 = 0x54c262;
    FUN_00404bac(param_1 + 0x2c4,unaff_EBX);
  }
  local_28 = 0x54c269;
  iVar6 = FUN_0054c0f0(param_1);
  if ((-1 < iVar6) || (*(char *)(param_1 + 0x2b4) != '\0')) {
    local_28 = 0x54c281;
    iVar6 = FUN_0054c0f0(param_1);
    local_28 = 0x54c28e;
    iVar6 = FUN_0054c1f4(1,iVar6 + 1);
    local_28 = 0x54c29b;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x14))();
    if (iVar6 <= iVar4) {
      iVar4 = (iVar4 - iVar6) + 1;
      do {
        local_28 = 0x54c2af;
        FUN_0054bf1c(param_1,iVar6 + -1,&stack0xffffffec);
        local_28 = 0x54c2ba;
        FUN_00404b6c(&local_8,unaff_ESI);
        if (local_8 != 0) {
          local_28 = 0x54c2cb;
          FUN_004095b0(local_8,&stack0xffffffe8);
          local_2c = 0x54c2dd;
          local_28 = unaff_EDI;
          FUN_004095b0(*(undefined4 *)(param_1 + 0x2c4),&local_1c);
          uVar1 = local_28;
          local_28 = 0x54c2e6;
          iVar5 = FUN_00404ee8(local_1c,uVar1);
          if (iVar5 == 1) {
            local_28 = 0x54c2f3;
            FUN_0054c10c(param_1,iVar6 + -1);
            goto LAB_0054c3f0;
          }
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  local_28 = 0x54c307;
  iVar6 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x14))();
  if (0 < iVar6) {
    iVar4 = 1;
    do {
      local_28 = 0x54c31f;
      FUN_0054bf1c(param_1,iVar4 + -1,&local_20);
      local_28 = 0x54c32a;
      FUN_00404b6c(&local_8,local_20);
      if (local_8 != 0) {
        local_28 = 0x54c33b;
        FUN_004095b0(local_8,&local_24);
        local_28 = local_24;
        local_2c = 0x54c34d;
        FUN_004095b0(*(undefined4 *)(param_1 + 0x2c4),&local_28);
        uVar1 = local_28;
        local_28 = 0x54c356;
        iVar5 = FUN_00404ee8(uVar1,uVar1);
        if (iVar5 == 1) {
          local_28 = 0x54c363;
          FUN_0054c10c(param_1,iVar4 + -1);
          goto LAB_0054c3f0;
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (*(char *)(param_1 + 0x2b4) != '\0') {
    local_28 = 0x54c383;
    FUN_00404abc(param_1 + 0x2c4,uVar3);
    local_28 = 0x54c38e;
    iVar6 = (**(code **)(**(int **)(param_1 + 0x23c) + 0x14))();
    if (0 < iVar6) {
      iVar4 = 1;
      do {
        local_28 = 0x54c3a6;
        FUN_0054bf1c(param_1,iVar4 + -1,&local_2c);
        local_28 = 0x54c3b1;
        FUN_00404b6c(&local_8,local_2c);
        if (local_8 != 0) {
          local_28 = 0x54c3c2;
          FUN_004095b0(local_8,&local_30);
          local_28 = local_30;
          local_2c = 0x54c3d4;
          FUN_004095b0(*(undefined4 *)(param_1 + 0x2c4),&local_34);
          uVar1 = local_28;
          local_28 = 0x54c3dd;
          iVar5 = FUN_00404ee8(local_34,uVar1);
          if (iVar5 == 1) {
            local_28 = 0x54c3ea;
            FUN_0054c10c(param_1,iVar4 + -1);
            break;
          }
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
LAB_0054c3f0:
  puVar2 = local_1c;
  *in_FS_OFFSET = local_24;
  local_1c = &LAB_0054c454;
  local_20 = (undefined1 *)0x54c40a;
  FUN_004048f8(&local_34,2,puVar2);
  local_20 = (undefined1 *)0x54c412;
  FUN_00404ff0(&local_2c);
  local_20 = (undefined1 *)0x54c41f;
  FUN_004048f8(&local_28,2);
  local_20 = (undefined1 *)0x54c427;
  FUN_00404ff0(&local_20);
  local_20 = (undefined1 *)0x54c434;
  FUN_004048f8(&local_1c,2);
  local_20 = (undefined1 *)0x54c43c;
  FUN_00404ff0(&stack0xffffffec);
  local_20 = (undefined1 *)0x54c444;
  FUN_004048d4(&stack0xfffffff0);
  local_20 = (undefined1 *)0x54c44c;
  FUN_004048d4(&local_8);
  return;
}

