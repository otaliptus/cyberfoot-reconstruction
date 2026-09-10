// Address: 004f91c4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_004f91c4(undefined4 param_1,char param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 fVar8;
  float10 fVar9;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  float10 fVar10;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined8 local_1c;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_2c = 0;
  local_28 = 0;
  local_20 = 0;
  puStack_44 = &LAB_004f94fa;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  local_1c = 0.0;
  puVar2 = &stack0xfffffffc;
  local_8 = param_1;
  if ((((*(char *)(param_4 + -5) == '\0') ||
       (cVar3 = (**(code **)(**(int **)(param_4 + -4) + 300))
                          (*(int **)(param_4 + -4),*(undefined4 *)(*(int *)(param_4 + -4) + 0x4dc)),
       fVar8 = in_ST0, puVar2 = puStack_40, cVar3 != '\0')) &&
      (puStack_40 = puVar2, fVar8 = in_ST0, param_2 != '\x02')) && (param_2 != '\a')) {
    piVar4 = (int *)(**(code **)(**(int **)(param_4 + -4) + 0x23c))
                              (*(int **)(param_4 + -4),local_8,
                               *(undefined4 *)(*(int *)(param_4 + -4) + 0x4dc));
    fVar8 = in_ST1;
    in_ST1 = in_ST2;
    in_ST2 = in_ST3;
    in_ST3 = in_ST4;
    in_ST4 = in_ST5;
    in_ST5 = in_ST6;
    in_ST6 = in_ST7;
    (**(code **)(*piVar4 + 0x10))();
    local_1c = (double)in_ST0;
    in_ST7 = in_ST6;
  }
  switch(param_2) {
  case '\x01':
    FUN_004f913c(local_8,&local_1c);
    local_1c = local_1c / (double)*(int *)(param_4 + -0xc);
    break;
  case '\x02':
    local_1c = (double)*(int *)(param_4 + -0xc);
    break;
  case '\x03':
    local_24 = (int *)FUN_00403a54(PTR_PTR_0041bda0,1);
    iVar6 = (**(code **)(**(int **)(param_4 + -4) + 0x11c))();
    if (-1 < iVar6 + -1) {
      iVar7 = 0;
      do {
        if (((*(char *)(param_4 + -5) == '\0') ||
            (cVar3 = (**(code **)(**(int **)(param_4 + -4) + 300))(*(int **)(param_4 + -4),iVar7),
            cVar3 != '\0')) &&
           (cVar3 = FUN_00514640(*(undefined4 *)(param_4 + -4),iVar7), cVar3 != '\0')) {
          (**(code **)(**(int **)(param_4 + -4) + 0x100))
                    (*(int **)(param_4 + -4),local_8,iVar7,&local_20);
          FUN_00404b6c(&local_28,local_20);
          iVar5 = (**(code **)(*local_24 + 0x54))(local_24,local_28);
          if (iVar5 == -1) {
            FUN_00404b6c(&local_2c,local_20);
            (**(code **)(*local_24 + 0x38))(local_24,local_2c);
          }
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (**(code **)(*local_24 + 0x14))();
    local_1c = (double)iVar6;
    FUN_0040fe60(&local_24);
    break;
  case '\x04':
    iVar6 = (**(code **)(**(int **)(param_4 + -4) + 0x11c))();
    iVar6 = iVar6 + -1;
    if (0 < iVar6) {
      iVar7 = 1;
      do {
        fVar9 = in_ST1;
        if (((*(char *)(param_4 + -5) == '\0') ||
            (cVar3 = (**(code **)(**(int **)(param_4 + -4) + 300))(*(int **)(param_4 + -4),iVar7),
            fVar9 = in_ST1, cVar3 != '\0')) &&
           (cVar3 = FUN_00514640(*(undefined4 *)(param_4 + -4),iVar7), in_ST1 = fVar9, cVar3 != '\0'
           )) {
          piVar4 = (int *)(**(code **)(**(int **)(param_4 + -4) + 0x23c))
                                    (*(int **)(param_4 + -4),local_8,iVar7);
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
          (**(code **)(*piVar4 + 0x10))();
          bVar1 = (float10)local_1c < fVar8;
          fVar8 = fVar9;
          in_ST7 = in_ST6;
          if (bVar1) {
            fVar10 = in_ST6;
            piVar4 = (int *)(**(code **)(**(int **)(param_4 + -4) + 0x23c))
                                      (*(int **)(param_4 + -4),local_8,iVar7);
            fVar8 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = fVar10;
            (**(code **)(*piVar4 + 0x10))();
            local_1c = (double)fVar9;
            in_ST7 = in_ST6;
          }
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    break;
  case '\x05':
    iVar6 = (**(code **)(**(int **)(param_4 + -4) + 0x11c))();
    iVar6 = iVar6 + -1;
    if (0 < iVar6) {
      iVar7 = 1;
      do {
        fVar9 = in_ST1;
        if (((*(char *)(param_4 + -5) == '\0') ||
            (cVar3 = (**(code **)(**(int **)(param_4 + -4) + 300))(*(int **)(param_4 + -4),iVar7),
            fVar9 = in_ST1, cVar3 != '\0')) &&
           (cVar3 = FUN_00514640(*(undefined4 *)(param_4 + -4),iVar7), in_ST1 = fVar9, cVar3 != '\0'
           )) {
          piVar4 = (int *)(**(code **)(**(int **)(param_4 + -4) + 0x23c))
                                    (*(int **)(param_4 + -4),local_8,iVar7);
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
          (**(code **)(*piVar4 + 0x10))();
          bVar1 = fVar8 < (float10)local_1c;
          fVar8 = fVar9;
          in_ST7 = in_ST6;
          if (bVar1) {
            fVar10 = in_ST6;
            piVar4 = (int *)(**(code **)(**(int **)(param_4 + -4) + 0x23c))
                                      (*(int **)(param_4 + -4),local_8,iVar7);
            fVar8 = in_ST1;
            in_ST1 = in_ST2;
            in_ST2 = in_ST3;
            in_ST3 = in_ST4;
            in_ST4 = in_ST5;
            in_ST5 = in_ST6;
            in_ST6 = fVar10;
            (**(code **)(*piVar4 + 0x10))();
            local_1c = (double)fVar9;
            in_ST7 = in_ST6;
          }
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    break;
  case '\x06':
    FUN_004f913c(local_8,&local_1c);
    break;
  case '\a':
    FUN_00403c80(*(undefined4 *)(param_4 + -4),local_8,&local_1c);
  }
  FUN_00403c80(*(undefined4 *)(param_4 + -4),local_8,&local_1c);
  puVar2 = puStack_40;
  local_14 = (undefined4)local_1c;
  local_10 = local_1c._4_4_;
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_004f9501;
  puStack_44 = (undefined1 *)0x4f94f1;
  FUN_004048f8(&local_2c,2,puVar2);
  puStack_44 = (undefined1 *)0x4f94f9;
  FUN_00404ff0(&local_20);
  return;
}

