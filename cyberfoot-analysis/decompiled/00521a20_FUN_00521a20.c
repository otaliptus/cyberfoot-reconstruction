// Address: 00521a20
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00521a20(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int in_stack_00000004;
  int *piVar8;
  undefined1 *puVar9;
  undefined1 local_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 local_20 [16];
  int local_10;
  uint local_c;
  uint local_8;
  
  piVar7 = (int *)(in_stack_00000004 + -4);
  if ((*(byte *)(*piVar7 + 0x58) & 2) == 0) {
    if ((*(byte *)(*piVar7 + 0x59) & 1) != 0) {
      uVar3 = (**(code **)(**(int **)(*piVar7 + 0x40) + 0x2c))();
      uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                           *(undefined4 *)(*piVar7 + 0x60));
      uVar5 = FUN_0051d4c8(uVar1,3);
      if (uVar3 != (uVar5 & 0xffff)) {
        uVar3 = (**(code **)(**(int **)(*piVar7 + 0x40) + 0x20))();
        uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                             *(undefined4 *)(*piVar7 + 0x60));
        uVar5 = FUN_0051d4c8(uVar1,4);
        if (uVar3 != (uVar5 & 0xffff)) {
          uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                               *(undefined4 *)(*piVar7 + 0x60));
          local_8 = FUN_0051d4c8(uVar1,2);
          local_8 = local_8 & 0xffff;
          uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                               *(undefined4 *)(*piVar7 + 0x60));
          local_c = FUN_0051d4c8(uVar1,4);
          local_c = local_c & 0xffff;
          local_10 = (**(code **)(**(int **)(*piVar7 + 0x40) + 0x2c))();
          iVar2 = (**(code **)(**(int **)(*piVar7 + 0x40) + 0x20))();
          iVar6 = FUN_00430280(*(undefined4 *)(*piVar7 + 0x68));
          FUN_0042ab6c(*(undefined4 *)(iVar6 + 0x14),*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 100)
                      );
          uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                               *(undefined4 *)(*piVar7 + 0x60));
          uVar3 = FUN_0051d4c8(uVar1,1);
          local_30 = (uVar3 & 0xffff) + *(int *)(*piVar7 + 0x48);
          uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                               *(undefined4 *)(*piVar7 + 0x60));
          uVar3 = FUN_0051d4c8(uVar1,3);
          local_28 = (uVar3 & 0xffff) + local_30;
          for (; local_30 < *(int *)(*piVar7 + 0x50); local_30 = local_30 + local_10) {
            local_2c = *(int *)(*piVar7 + 0x4c) + local_8;
            local_24 = local_2c + local_c;
            for (; local_2c < *(int *)(*piVar7 + 0x54); local_2c = local_2c + iVar2) {
              uVar1 = FUN_00430280(*(undefined4 *)(*piVar7 + 0x68));
              FUN_0042af8c(uVar1,&local_30);
              local_24 = local_24 + iVar2;
            }
            local_28 = local_28 + local_10;
          }
          return;
        }
      }
    }
    uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar7 + 0x60));
    FUN_0051fb94(uVar1,*piVar7 + 0x48,local_40);
    puVar9 = local_40;
    uVar1 = FUN_00430280(*(undefined4 *)(*piVar7 + 0x68));
    FUN_0042af8c(uVar1,puVar9);
  }
  else if ((*(byte *)(*piVar7 + 0x59) & 1) == 0) {
    uVar1 = FUN_00430280(*(undefined4 *)(*piVar7 + 0x68));
    FUN_0042b584(uVar1,local_40);
    puVar9 = local_40;
    uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar7 + 0x60));
    FUN_0051fb94(uVar1,puVar9,local_20);
    puVar9 = local_20;
    uVar1 = FUN_00430280(*(undefined4 *)(*piVar7 + 0x70));
    uVar4 = FUN_00430280(*(undefined4 *)(*piVar7 + 0x68));
    FUN_0042addc(uVar4,local_20,uVar1,puVar9);
  }
  else {
    uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar7 + 0x60));
    local_8 = FUN_0051d4c8(uVar1,2);
    local_8 = local_8 & 0xffff;
    uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar7 + 0x60));
    local_c = FUN_0051d4c8(uVar1,4);
    local_c = local_c & 0xffff;
    local_10 = (**(code **)(**(int **)(*piVar7 + 0x40) + 0x2c))();
    iVar2 = (**(code **)(**(int **)(*piVar7 + 0x40) + 0x20))();
    uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar7 + 0x60));
    uVar3 = FUN_0051d4c8(uVar1,1);
    local_30 = (uVar3 & 0xffff) + *(int *)(*piVar7 + 0x48);
    uVar1 = FUN_005212bc(*(undefined4 *)(*(int *)(*piVar7 + 0x40) + 0x2c),
                         *(undefined4 *)(*piVar7 + 0x60));
    uVar3 = FUN_0051d4c8(uVar1,3);
    local_28 = (uVar3 & 0xffff) + local_30;
    for (; local_30 < *(int *)(*piVar7 + 0x50); local_30 = local_30 + local_10) {
      local_2c = *(int *)(*piVar7 + 0x4c) + local_8;
      local_24 = local_2c + local_c;
      for (; local_2c < *(int *)(*piVar7 + 0x54); local_2c = local_2c + iVar2) {
        piVar8 = &local_30;
        uVar1 = FUN_00430280(*(undefined4 *)(*piVar7 + 0x70));
        uVar4 = FUN_00430280(*(undefined4 *)(*piVar7 + 0x68));
        FUN_0042addc(uVar4,&local_30,uVar1,piVar8);
        local_24 = local_24 + iVar2;
      }
      local_28 = local_28 + local_10;
    }
  }
  return;
}

