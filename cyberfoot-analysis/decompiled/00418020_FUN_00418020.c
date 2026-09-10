// Address: 00418020
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00418020(undefined4 *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  double *pdVar9;
  float fVar10;
  int iVar11;
  float extraout_EDX;
  undefined4 unaff_EBX;
  int iVar12;
  undefined4 unaff_ESI;
  int iVar13;
  undefined4 *in_FS_OFFSET;
  float10 in_ST0;
  float10 in_ST1;
  float10 in_ST2;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float10 in_ST7;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  
  puStack_24 = &stack0xfffffffc;
  iVar11 = 4;
  do {
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  LOCK();
  UNLOCK();
  puStack_28 = &LAB_00418321;
  local_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_2c;
  puStack_30 = (undefined1 *)0x418055;
  iVar11 = FUN_004176f8(param_2);
  if (iVar11 == 0) {
    puStack_30 = (undefined1 *)0x418068;
    FUN_00411988(0x80070057);
  }
  puStack_30 = (undefined1 *)0x418070;
  FUN_00417768(param_2);
  puStack_34 = &LAB_004182f1;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  iVar5 = FUN_004027fc(iVar11 << 2);
  if (-1 < iVar11 + -1) {
    iVar12 = 0;
    iVar13 = iVar11;
    do {
      iVar6 = FUN_00417744(param_2,iVar12 + 1);
      iVar7 = FUN_00417720(param_2,iVar12 + 1);
      *(int *)(iVar5 + iVar12 * 4) = (iVar6 - iVar7) + 1;
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  FUN_00405f1c(param_1,0,iVar11,iVar5);
  FUN_00417ae8(0);
  iVar11 = FUN_00417c88(0);
  FUN_00417b70(*param_1,0,&stack0xffffffe8);
  FUN_004060b4(unaff_EBX,PTR_DAT_0040129c,&stack0xffffffe4);
  do {
    puVar14 = &local_2c;
    uVar8 = FUN_00405ef4(unaff_ESI);
    FUN_004178f8(param_2,unaff_ESI,uVar8,puVar14);
    uVar15 = 0;
    uVar8 = FUN_00405ef4(unaff_ESI);
    pdVar9 = (double *)FUN_00417a8c(*param_1,unaff_ESI,uVar8,uVar15);
    if (iVar11 < 0xc) {
      if (iVar11 == 0xb) {
        uVar4 = FUN_00413e74(&local_2c);
        *(undefined2 *)pdVar9 = uVar4;
      }
      else {
        switch(iVar11) {
        case 2:
          uVar4 = FUN_00412a6c(&local_2c);
          *(undefined2 *)pdVar9 = uVar4;
          break;
        case 3:
          fVar10 = (float)FUN_00412a6c(&local_2c);
          *(float *)pdVar9 = fVar10;
          break;
        case 4:
          FUN_004143bc(&local_2c);
          *(float *)pdVar9 = (float)in_ST0;
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
          break;
        case 5:
          FUN_004143bc(&local_2c);
          *pdVar9 = (double)in_ST0;
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
          break;
        case 6:
          FUN_00414d18(&local_2c);
          *pdVar9 = (double)(longlong)ROUND(in_ST0);
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
          break;
        case 7:
          FUN_004143bc(&local_2c);
          *pdVar9 = (double)in_ST0;
          in_ST0 = in_ST1;
          in_ST1 = in_ST2;
          in_ST2 = in_ST3;
          in_ST3 = in_ST4;
          in_ST4 = in_ST5;
          in_ST5 = in_ST6;
          in_ST6 = in_ST7;
          break;
        case 8:
          FUN_00415af4(pdVar9,&local_2c);
          break;
        case 9:
          FUN_00416198(pdVar9,&local_2c);
          break;
        case 10:
          fVar10 = (float)FUN_00413530(&local_2c);
          *(float *)pdVar9 = fVar10;
        }
      }
    }
    else if (iVar11 < 0x13) {
      if (iVar11 == 0x12) {
        uVar4 = FUN_00412a6c(&local_2c);
        *(undefined2 *)pdVar9 = uVar4;
      }
      else if (iVar11 == 0xc) {
        FUN_00412164(pdVar9,&local_2c);
      }
      else if (iVar11 == 0xd) {
        FUN_004160cc(pdVar9,&local_2c);
      }
      else if (iVar11 == 0x10) {
        uVar2 = FUN_00412a6c(&local_2c);
        *(undefined1 *)pdVar9 = uVar2;
      }
      else if (iVar11 == 0x11) {
        uVar2 = FUN_00412a6c(&local_2c);
        *(undefined1 *)pdVar9 = uVar2;
      }
    }
    else if (iVar11 == 0x13) {
      fVar10 = (float)FUN_00413530(&local_2c);
      *(float *)pdVar9 = fVar10;
    }
    else if (iVar11 == 0x14) {
      fVar10 = (float)FUN_00413530(&local_2c);
      *(float *)pdVar9 = fVar10;
      *(float *)((int)pdVar9 + 4) = extraout_EDX;
    }
    else if (iVar11 == 0x100) {
      FUN_004153cc(pdVar9,&local_2c);
    }
    cVar3 = FUN_00417bc4(&stack0xffffffe4,unaff_EBX);
  } while (cVar3 != '\0');
  FUN_0040281c(iVar5);
  puVar1 = puStack_30;
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004182f8;
  puStack_34 = (undefined1 *)0x4182f0;
  FUN_00417788(param_2,uStack_38,puVar1);
  return;
}

