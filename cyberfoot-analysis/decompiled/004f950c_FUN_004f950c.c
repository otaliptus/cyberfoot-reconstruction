// Address: 004f950c
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f950c(int *param_1,char param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar5;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 uVar6;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined8 local_1c;
  int local_10;
  char local_9;
  int *local_8;
  
  puStack_34 = &stack0xfffffffc;
  local_20 = 0;
  local_24 = 0;
  puStack_38 = &LAB_004f966e;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_9 = param_2;
  local_8 = param_1;
  if (param_2 == '\0') {
    local_10 = (**(code **)(*param_1 + 0x11c))();
  }
  else {
    local_10 = *(int *)(param_1[0x166] + 0x1044);
    puStack_34 = &stack0xfffffffc;
  }
  iVar2 = FUN_0050ae9c(local_8[0x135]);
  if (-1 < iVar2 + -1) {
    iVar4 = 0;
    do {
      iVar3 = (**(code **)(*(int *)local_8[0x135] + 0x30))((int *)local_8[0x135],iVar4);
      fVar5 = in_ST0;
      if (*(char *)(*(int *)(iVar3 + 0x5c) + 0x31) != '\0') {
        if (local_10 == 0) {
          iVar3 = (**(code **)(*(int *)local_8[0x135] + 0x30))((int *)local_8[0x135],iVar4);
          FUN_00509a64(*(undefined4 *)(iVar3 + 0x5c),&LAB_004f9680);
          iVar3 = *(int *)local_8[0x135];
          iVar3 = (**(code **)(iVar3 + 0x30))((int *)local_8[0x135],iVar4,iVar3,0,0);
          FUN_00509c4c(*(undefined4 *)(iVar3 + 0x5c));
          fVar5 = in_ST0;
        }
        else {
          iVar3 = *(int *)local_8[0x135];
          iVar3 = (**(code **)(iVar3 + 0x30))((int *)local_8[0x135],iVar4,iVar3,&stack0xfffffffc);
          fVar5 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
          FUN_004f91c4(iVar4,*(undefined1 *)(*(int *)(iVar3 + 0x5c) + 0x31));
          local_1c = (double)in_ST0;
          iVar3 = (**(code **)(*(int *)local_8[0x135] + 0x30))((int *)local_8[0x135],iVar4);
          uVar6 = *(undefined4 *)(iVar3 + 0x5c);
          in_ST7 = in_ST6;
          FUN_0040bdc0(&local_24);
          FUN_004051d4(&local_20,local_24);
          FUN_00509a64(uVar6,local_20);
          iVar3 = *(int *)local_8[0x135];
          iVar3 = (**(code **)(iVar3 + 0x30))
                            ((int *)local_8[0x135],iVar4,iVar3,SUB82(local_1c,0),local_1c._4_4_);
          FUN_00509c4c(*(undefined4 *)(iVar3 + 0x5c));
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
      in_ST0 = fVar5;
    } while (iVar2 != 0);
  }
  puVar1 = puStack_34;
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_004f9675;
  puStack_38 = (undefined1 *)0x4f9665;
  FUN_004048d4(&local_24,uStack_3c,puVar1);
  puStack_38 = (undefined1 *)0x4f966d;
  FUN_00404ff0(&local_20);
  return;
}

