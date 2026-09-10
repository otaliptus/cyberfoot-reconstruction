// Address: 005721b4
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_005721b4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *in_FS_OFFSET;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  undefined *local_44;
  undefined4 local_40;
  char *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  undefined1 *local_2c;
  char *local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar5 = 0xc;
  do {
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  local_1c = 0x5721dc;
  FUN_00405658(&stack0xffffffec,PTR_DAT_004010dc,2);
  puVar3 = PTR_DAT_0066b154;
  *in_FS_OFFSET = &local_24;
  iVar5 = *(int *)PTR_DAT_0066b27c;
  uVar1 = *(undefined4 *)(*(int *)puVar3 + 0x218 + iVar5 * 600);
  local_24 = *(undefined4 *)(*(int *)puVar3 + 0x214 + iVar5 * 600);
  local_20 = *(undefined4 *)(*(int *)puVar3 + 0x22c + iVar5 * 600);
  local_2c = &LAB_005722cf;
  local_30 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  iVar4 = *(int *)(*(int *)puVar3 + 0x20c + *(int *)PTR_DAT_0066b27c * 600) +
          *(int *)(*(int *)puVar3 + 0x224 + iVar5 * 600);
  iVar5 = *(int *)(*(int *)puVar3 + 0x20c + iVar5 * 600) * 100;
  local_38 = (char *)(iVar5 / iVar4);
  local_34 = 0x5722c2;
  local_28 = &stack0xfffffffc;
  local_1c = uVar1;
  iVar5 = FUN_00402c38(local_38,iVar5 % iVar4);
  pcVar7 = local_28;
  *in_FS_OFFSET = local_30;
  local_28 = (char *)0x5722e4;
  FUN_00409dd8(iVar5,&local_3c,pcVar7);
  local_28 = (char *)0x5722f4;
  FUN_00404bf0(&stack0xffffffec,local_3c,&DAT_00572440);
  local_28 = (char *)0x572304;
  FUN_00409dd8(100 - iVar5,&local_40);
  local_28 = "hL$W";
  FUN_00404bf0(&stack0xfffffff0,local_40,&DAT_00572440);
  local_28 = "<shad>";
  local_30 = "<IND x=\"40\">Posse de Bola<IND x=\"150\">";
  local_38 = "</shad><BR>";
  local_3c = "<shad>";
  local_40 = (char *)0x572339;
  local_34 = unaff_EBX;
  local_2c = (undefined1 *)unaff_ESI;
  FUN_00409dd8(local_24,&local_48);
  local_40 = local_48;
  local_44 = &DAT_005724a0;
  local_48 = (char *)0x57234c;
  FUN_00409dd8(local_20,&local_4c);
  local_48 = local_4c;
  local_4c = "</shad><BR>";
  local_50 = "<shad>";
  local_54 = (char *)0x572364;
  FUN_00409dd8(local_2c,&local_50);
  local_54 = local_50;
  local_58 = "<IND x=\"40\">Roubadas bola<IND x=\"150\">";
  local_5c = (char *)0x572377;
  FUN_00409dd8(local_28,&local_54);
  local_5c = local_54;
  local_60 = "</shad><BR>";
  local_64 = "<shad>";
  FUN_00409dd8(local_1c,&local_58);
  pcVar13 = "<IND x=\"40\">Passes errados<IND x=\"150\">";
  pcVar14 = local_58;
  FUN_00409dd8(uVar1,&local_5c);
  pcVar11 = "</shad><BR>";
  pcVar10 = "<shad>";
  pcVar12 = local_5c;
  FUN_00409dd8(local_34,&local_60);
  pcVar8 = "<IND x=\"40\">Faltas cometidas<IND x=\"150\">";
  pcVar9 = local_60;
  FUN_00409dd8(local_30,&local_64);
  pcVar6 = "</shad><BR>";
  pcVar7 = local_64;
  FUN_00404c64(&local_44,0x19);
  piVar2 = *(int **)(*(int *)(param_1 + 0x370) + 0x198);
  iVar5 = *piVar2;
  (**(code **)(iVar5 + 0x2c))
            (piVar2,local_44,iVar5,pcVar6,pcVar7,pcVar8,pcVar9,pcVar10,pcVar11,pcVar12,pcVar13,
             pcVar14);
  *in_FS_OFFSET = pcVar6;
  FUN_004048f8(&local_64,0xb,pcVar8,&LAB_0057242e);
  FUN_00405744(&stack0xffffffec,PTR_DAT_004010dc,2);
  return;
}

