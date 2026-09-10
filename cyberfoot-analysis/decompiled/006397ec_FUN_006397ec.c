// Address: 006397ec
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006397ec(int param_1)

{
  wchar_t *pwVar1;
  undefined1 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined4 unaff_EBX;
  uint uVar14;
  undefined4 unaff_ESI;
  int iVar15;
  undefined4 *in_FS_OFFSET;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [28];
  undefined4 uStack_64;
  wchar_t *pwStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  wchar_t *pwStack_54;
  undefined4 uStack_50;
  wchar_t *pwStack_4c;
  wchar_t *local_48;
  undefined4 uStack_44;
  wchar_t *pwStack_40;
  wchar_t *pwStack_3c;
  undefined *puStack_38;
  wchar_t *local_34;
  char *pcStack_30;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *local_1c;
  undefined4 local_c;
  int local_8;
  
  local_1c = &stack0xfffffffc;
  iVar12 = 0x19;
  do {
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  puStack_20 = &LAB_0063a6ef;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uStack_2c = (double)CONCAT44(0x639817,(undefined1 *)uStack_2c);
  local_8 = param_1;
  FUN_00404ff0(&local_c);
  uStack_2c = (double)CONCAT44(0x639834,(undefined1 *)uStack_2c);
  bVar3 = FUN_004080c0(*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639855,(undefined1 *)uStack_2c);
  bVar4 = FUN_004080c4(*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x63987a,(undefined1 *)uStack_2c);
  bVar5 = FUN_004080c8(*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  if (((bVar3 < 0xe7) || (bVar4 < 0xe7)) || (bVar5 < 0xe7)) {
    uStack_2c = (double)CONCAT44(0x639911,(undefined1 *)uStack_2c);
    uVar7 = FUN_0050e4dc(*(undefined4 *)(local_8 + 0x334),"energia");
    uStack_2c = (double)CONCAT44(0x63992f,(undefined1 *)uStack_2c);
    FUN_004fb868(uVar7,*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
    uStack_2c = (double)CONCAT44(0x639942,(undefined1 *)uStack_2c);
    uVar7 = FUN_0050e4dc(*(undefined4 *)(local_8 + 0x334),"energia");
    uStack_2c = (double)CONCAT44(0x639960,(undefined1 *)uStack_2c);
    FUN_004fb898(uVar7,*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  }
  else {
    uStack_2c = (double)CONCAT44(0x6398ad,(undefined1 *)uStack_2c);
    uVar7 = FUN_0050e4dc(*(undefined4 *)(local_8 + 0x334),"energia");
    uStack_2c = (double)CONCAT44(0x6398cb,(undefined1 *)uStack_2c);
    FUN_004fb898(uVar7,*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
    uStack_2c = (double)CONCAT44(0x6398de,(undefined1 *)uStack_2c);
    uVar7 = FUN_0050e4dc(*(undefined4 *)(local_8 + 0x334),"energia");
    uStack_2c = (double)CONCAT44(0x6398fc,(undefined1 *)uStack_2c);
    FUN_004fb868(uVar7,*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  }
  uStack_2c = (double)CONCAT44(0x63997d,(undefined1 *)uStack_2c);
  FUN_004080c0(*(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x63999a,(undefined1 *)uStack_2c);
  FUN_004080c4(*(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x6399b7,(undefined1 *)uStack_2c);
  FUN_004080c8(*(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x6399c7,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3b4),0);
  uStack_2c = (double)CONCAT44(0x6399d7,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3d0),0);
  uStack_2c = (double)CONCAT44(0x6399e7,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3d4),0);
  uStack_2c = (double)CONCAT44(0x6399f7,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3c8),0);
  uStack_2c = (double)CONCAT44(0x639a07,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3cc),0);
  uStack_2c = (double)CONCAT44(0x639a17,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3c4),0);
  uStack_2c = (double)CONCAT44(0x639a27,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3b0),0);
  uStack_2c = (double)CONCAT44(0x639a37,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 1000),0);
  uStack_2c = (double)CONCAT44(0x639a47,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3ec),0);
  uStack_2c = (double)CONCAT44(0x639a57,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3f0),0);
  uStack_2c = (double)CONCAT44(0x639a67,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3f4),0);
  uStack_2c = (double)CONCAT44(0x639a77,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3f8),0);
  uStack_2c = (double)CONCAT44(0x639a87,(undefined1 *)uStack_2c);
  FUN_00545868(*(undefined4 *)(local_8 + 0x3fc),0);
  uStack_2c = (double)CONCAT44(0x639a93,(undefined1 *)uStack_2c);
  DAT_006d52fc = FUN_00528684(PTR_PTR_00525340,1);
  uStack_2c = (double)CONCAT44(0x639aba,(undefined1 *)uStack_2c);
  FUN_0052894c(DAT_006d52fc,
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639adc,(undefined1 *)uStack_2c);
  FUN_00528910(DAT_006d52fc,
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639b0b,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)(local_8 + 0x398) + 0x250) + 0x34),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639b3a,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(*(int *)(local_8 + 0x3a4) + 0x250) + 0x34),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639b54,(undefined1 *)uStack_2c);
  FUN_0052a40c(*(undefined4 *)(*(int *)(local_8 + 0x398) + 0x250),DAT_006d52fc);
  uStack_2c = (double)CONCAT44(0x639b6e,(undefined1 *)uStack_2c);
  FUN_0052a40c(*(undefined4 *)(*(int *)(local_8 + 0x3a4) + 0x250),DAT_006d52fc);
  uStack_2c = (double)CONCAT44(0x639b7a,(undefined1 *)uStack_2c);
  FUN_00528684(PTR_PTR_00525340,1);
  DAT_006d5300 = *(undefined4 *)(*(int *)(local_8 + 0x3a0) + 0x240);
  uStack_2c = (double)CONCAT44(0x639bb5,(undefined1 *)uStack_2c);
  FUN_005288d0(DAT_006d5300,
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639bc9,(undefined1 *)uStack_2c);
  FUN_0053333c(*(undefined4 *)(local_8 + 0x3a0),DAT_006d5300);
  uStack_2c = (double)CONCAT44(0x639be6,(undefined1 *)uStack_2c);
  FUN_00404b48(&stack0xfffffff0,*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  uStack_2c = (double)CONCAT44(0x639bfd,(undefined1 *)uStack_2c);
  FUN_00551138(*(undefined4 *)(*(int *)(local_8 + 0x3ac) + 0x16c),unaff_EBX);
  uStack_2c = (double)CONCAT44(0x639c1a,(undefined1 *)uStack_2c);
  FUN_00404b48(&stack0xffffffec,*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  uStack_2c = (double)CONCAT44(0x639c31,(undefined1 *)uStack_2c);
  FUN_00551138(*(undefined4 *)(*(int *)(local_8 + 0x3a8) + 0x16c),unaff_ESI);
  uStack_2c = (double)CONCAT44(0x639c5d,(undefined1 *)uStack_2c);
  FUN_00551110(*(undefined4 *)(*(int *)(local_8 + 0x3ac) + 0x16c),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639c89,(undefined1 *)uStack_2c);
  FUN_00551050(*(undefined4 *)(*(int *)(local_8 + 0x3ac) + 0x16c),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  iVar12 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x50 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  if (iVar12 < 1) {
    uStack_2c = 0.0;
    pcStack_30 = (char *)0x639cdd;
    FUN_0057b808(*(undefined4 *)(local_8 + 0x398));
  }
  else {
    uStack_2c = (double)iVar12;
    pcStack_30 = (char *)0x639cc9;
    FUN_0057b808(*(undefined4 *)(local_8 + 0x398),PTR_DAT_0066ac78);
  }
  iVar12 = *(int *)(*(int *)PTR_DAT_0066af70 + 0x54 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8);
  if (iVar12 < 1) {
    uStack_2c = 0.0;
    pcStack_30 = (char *)0x639d31;
    FUN_0057b808(*(undefined4 *)(local_8 + 0x3a4));
  }
  else {
    uStack_2c = (double)iVar12;
    pcStack_30 = (char *)0x639d1d;
    FUN_0057b808(*(undefined4 *)(local_8 + 0x3a4),PTR_DAT_0066ac78);
  }
  uStack_2c = (double)CONCAT44(0x639d56,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(DAT_006d52c4 + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639d5b,(undefined1 *)uStack_2c);
  cVar6 = FUN_00651f8c();
  if (cVar6 != '\0') {
    uStack_2c = (double)CONCAT44(0x639d6f,(undefined1 *)uStack_2c);
    FUN_00466128(*(undefined4 *)(local_8 + 0x380),0);
  }
  uStack_2c = (double)CONCAT44(0x639d98,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x37c) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639dc1,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3b0) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639dea,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3b4) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639e13,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3c4) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639e3c,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3c8) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639e65,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3cc) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639e8e,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3d0) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639eb7,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3d4) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639ee0,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 1000) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639f09,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3ec) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639f32,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3f0) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639f5b,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3f4) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639f84,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3f8) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639fad,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x3fc) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639fd3,(undefined1 *)uStack_2c);
  FUN_00570674(*(undefined4 *)(local_8 + 0x3d8),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x639ff0,(undefined1 *)uStack_2c);
  bVar3 = FUN_004080c0(*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uVar14 = (uint)bVar3;
  uStack_2c = (double)CONCAT44(0x63a011,(undefined1 *)uStack_2c);
  uVar8 = FUN_004080c4(*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uVar8 = uVar8 & 0xff;
  uStack_2c = (double)CONCAT44(0x63a036,(undefined1 *)uStack_2c);
  uVar9 = FUN_004080c8(*(undefined4 *)
                        (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uVar9 = uVar9 & 0xff;
  if ((float)(uVar8 + uVar14 + uVar9) / _DAT_0063a710 <= _DAT_0063a714) {
    uStack_2c = (double)CONCAT44(0x63a06f,(undefined1 *)uStack_2c);
    uVar7 = FUN_006397d0(local_8,uVar14 + 0x23);
    uStack_2c = (double)CONCAT44(0x63a07c,(undefined1 *)uStack_2c);
    uVar10 = FUN_006397d0(local_8,uVar8 + 0x23);
    uStack_2c = (double)CONCAT44(0x63a089,(undefined1 *)uStack_2c);
    uVar11 = FUN_006397d0(local_8,uVar9 + 0x37);
  }
  else {
    uStack_2c = (double)CONCAT44(0x63a09a,(undefined1 *)uStack_2c);
    uVar7 = FUN_006397d0(local_8,uVar14 - 0x23);
    uStack_2c = (double)CONCAT44(0x63a0a9,(undefined1 *)uStack_2c);
    uVar10 = FUN_006397d0(local_8,uVar8 - 0x23);
    uStack_2c = (double)CONCAT44(0x63a0b8,(undefined1 *)uStack_2c);
    uVar11 = FUN_006397d0(local_8,uVar9 - 0x41);
  }
  uStack_2c = (double)CONCAT44(uVar11,0x63a0c7);
  uVar7 = FUN_00635ccc(local_8,uVar7,uVar10);
  uStack_2c = (double)CONCAT44(0x63a0d7,(undefined1 *)uStack_2c);
  FUN_00570698(*(undefined4 *)(local_8 + 0x3d8),uVar7);
  uStack_2c._0_4_ = &LAB_0063a15f;
  pcStack_30 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_30;
  local_34 = (wchar_t *)0x63a0f2;
  uStack_2c._4_4_ = &stack0xfffffffc;
  FUN_004030d4(&local_48,&DAT_0063a718);
  local_34 = (wchar_t *)0x63a11f;
  FUN_004030a4(&local_48,
               *(int *)PTR_DAT_0066b718 +
               *(int *)(*(int *)PTR_DAT_0066af70 + 0x44 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8) *
               0x80,0x29);
  local_34 = (wchar_t *)0x63a12a;
  FUN_004030d4(local_80,&local_48);
  local_34 = (wchar_t *)0x63a139;
  FUN_004030a4(local_80,&DAT_0063a72c,0x34);
  local_34 = L"喋诨ﱅ肋ϐ";
  FUN_00405194(&local_1c,local_80);
  local_34 = (wchar_t *)0x63a155;
  FUN_00545088(*(undefined4 *)(local_8 + 0x3d0),local_1c);
  puVar2 = uStack_2c._4_4_;
  *in_FS_OFFSET = pcStack_30;
  uStack_2c = (double)CONCAT44(0x63a192,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x40c) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8),puVar2);
  uStack_2c = (double)CONCAT44(0x63a1b7,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(DAT_006d52c4 + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x63a1e0,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x424) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x63a209,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x410) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c = (double)CONCAT44(0x63a232,(undefined1 *)uStack_2c);
  FUN_0042a3a0(*(undefined4 *)(*(int *)(local_8 + 0x308) + 0x68),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  uStack_2c._0_4_ =
       *(undefined1 **)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0xc);
  uStack_2c._4_4_ = "<shad>";
  pcStack_30 = *(char **)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10);
  local_34 = L"뗿ｸ\xffff偨控贀粅\xffff뫿\x03";
  FUN_0040d11c(&local_8c);
  uStack_2c = (double)CONCAT44(uStack_2c._4_4_,local_8c);
  pcStack_30 = "</shad>";
  local_34 = L"開ｼ\xffff䖍\xe880꽍ￜ喋讀ﱅ肋Ϝ";
  FUN_00404c64(&local_88,3);
  local_34 = L"喋讀ﱅ肋Ϝ";
  FUN_004051d4(&local_84,local_88);
  local_34 = L"碡暬欀ࡀ譟瀕暯謀謒슔¬";
  FUN_00545088(*(undefined4 *)(local_8 + 0x3dc),local_84);
  local_34 = L"碡暬欀ࡘꅟ꽰f\x8bҍ诘砕暬謀袒";
  FUN_004663a8(DAT_006d52c4,
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xac + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  iVar12 = *(int *)(PTR_DAT_0066ac78 + 8);
  if (*(int *)(*(int *)PTR_DAT_0066af70 + iVar12 * 0x2f8 + 0x1a4 +
              *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) < 1) {
    local_34 = L"碡暬茀袸";
    FUN_00642c50(*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar12 * 0x2f8) + 0x22,&local_c);
  }
  else {
    local_34 = L"뗿ｴ\xffff屨控ꄀ걸f䁫弈ᖋ꽰fኋҍ诂砕暬謀袒";
    FUN_00642c50(*(int *)(*(int *)PTR_DAT_0066af70 + 0x7c + iVar12 * 0x2f8) + 0x22,&local_90);
    local_34 = (wchar_t *)local_90;
    puStack_38 = &DAT_0063a75c;
    pwStack_3c = L"뗿ｰ\xffff桨控贀沕\xffff룿Ì";
    FUN_00642c50(*(int *)(*(int *)PTR_DAT_0066af70 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8 + 0x1a4
                         + *(int *)(PTR_DAT_0066ac78 + 0x88) * 4) + 0xb7,&local_94);
    pwStack_3c = (wchar_t *)local_94;
    pwStack_40 = L" ";
    uStack_44 = 0x63a362;
    FUN_00642c50(0xcc,&local_98);
    uStack_44 = local_98;
    local_48 = L"ᯫ碡暬ꄀ꽰f\x8b䒋糘삃财\xf855뻨\x88ꄀ걸f뢃\x88";
    FUN_00405330(&local_c,5);
  }
  if (*(int *)(PTR_DAT_0066ac78 + 0x88) == 3) {
    local_34 = 
    L"薍ｨ\xffff璺控\xe800ꟙￜ開ｨ\xffff䖍\xe8f8귳ￜ豨控＀\xf875ꁨ控贀撅\xffff뫿\x03"
    ;
    FUN_00409dd8(*(undefined4 *)
                  (*(int *)PTR_DAT_0066af70 + 0x80 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8),
                 &local_9c);
    local_34 = L"開ｨ\xffff䖍\xe8f8귳ￜ豨控＀\xf875ꁨ控贀撅\xffff뫿\x03";
    FUN_00404bac(&local_9c,&DAT_0063a774);
    local_34 = L"豨控＀\xf875ꁨ控贀撅\xffff뫿\x03";
    FUN_004051d4(&local_c,local_9c);
  }
  local_34 = L"<shad>";
  puStack_38 = (undefined *)local_c;
  pwStack_3c = L"</shad>";
  pwStack_40 = (wchar_t *)0x63a3fe;
  FUN_00405330(&local_a0,3);
  pwStack_40 = (wchar_t *)0x63a412;
  FUN_00545088(*(undefined4 *)(local_8 + 0x3d4),local_a0);
  pwStack_40 = L"<shad>";
  uStack_44 = 0x63a437;
  uVar7 = FUN_00402c38();
  uStack_44 = 0x63a442;
  FUN_006468f4(uVar7,&local_a8);
  uStack_44 = local_a8;
  local_48 = L"</shad>";
  pwStack_4c = 
  L"開｠\xffff䖋诼₀\x04\xe800갗\xfff0쒡浒\xe800瀕￤䂋謔砕暬欀ࡒ譟瀍暯謀謉톔°"
  ;
  FUN_00405330(&local_a4,3);
  pwStack_4c = L"쒡浒\xe800瀕￤䂋謔砕暬欀ࡒ譟瀍暯謀謉톔°";
  FUN_00545088(*(undefined4 *)(local_8 + 0x420),local_a4);
  pwStack_4c = L"䂋謔砕暬欀ࡒ譟瀍暯謀謉톔°";
  iVar12 = FUN_00481490(DAT_006d52c4);
  pwStack_4c = 
  L"閍ｘ\xffff碡暬謀ࡀ姨°茀墽\xffffÿ⵴閍ｔ\xffff碡暬謀ࡀ㷨°謀咕\xffff诿ﱅ肋˸"
  ;
  FUN_0042ab6c(*(undefined4 *)(iVar12 + 0x14),
               *(undefined4 *)
                (*(int *)PTR_DAT_0066af70 + 0xb0 + *(int *)(PTR_DAT_0066ac78 + 8) * 0x2f8));
  pwStack_4c = L"붃ｘ\xffff琀购咕\xffffꇿ걸f䂋\xe808뀽";
  FUN_00645508(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_ac);
  if (local_ac != 0) {
    pwStack_4c = (wchar_t *)0x63a4cb;
    FUN_00645508(*(undefined4 *)(PTR_DAT_0066ac78 + 8),&local_b0);
    pwStack_4c = (wchar_t *)0x63a4e5;
    FUN_0042d6c0(*(undefined4 *)(*(int *)(local_8 + 0x2f8) + 0x168),local_b0);
  }
  pwStack_4c = (wchar_t *)0x63a4f1;
  iVar12 = FUN_00405eec(*(undefined4 *)PTR_DAT_0066b770);
  iVar15 = 0;
  if ((0 < iVar12) && (-1 < iVar12 + -1)) {
    iVar13 = 0;
    do {
      if ((*(int *)(*(int *)PTR_DAT_0066b770 + iVar13 * 0x30) == *(int *)(PTR_DAT_0066ac78 + 8)) &&
         (*(char *)(*(int *)PTR_DAT_0066b770 + 0x28 + iVar13 * 0x30) == '\0')) {
        if (*(double *)(PTR_DAT_0066b574 + *(int *)(PTR_DAT_0066ac78 + 0x16c) * 0x18 + -0x10) -
            *(double *)(*(int *)PTR_DAT_0066b770 + 8 + iVar13 * 0x30) <= (double)_DAT_0063a7b4) {
          iVar15 = iVar15 + 1;
        }
        else {
          *(undefined1 *)(*(int *)PTR_DAT_0066b770 + 0x28 + iVar13 * 0x30) = 1;
        }
      }
      iVar13 = iVar13 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  if (iVar15 == 1) {
    pwStack_4c = L"<shad>";
    uStack_50 = 0x63a586;
    FUN_00642c50(0x46,&local_b8);
    uStack_50 = local_b8;
    pwStack_54 = L"</shad>";
    uStack_58 = 0x63a5a1;
    FUN_00405330(&local_b4,3);
    pwStack_4c = L"賩";
    FUN_00545088(*(undefined4 *)(local_8 + 0x424),local_b4);
  }
  else if (1 < iVar15) {
    pwStack_4c = L"<shad>";
    uStack_50 = 0x63a5d5;
    FUN_00409dd8(iVar15,&local_c8);
    uStack_50 = local_c8;
    pwStack_54 = L" ";
    uStack_58 = 0x63a5f0;
    FUN_00404c64(&local_c4,3);
    uStack_58 = 0x63a601;
    FUN_004051d4(&local_c0,local_c4);
    uStack_58 = local_c0;
    uStack_5c = 0x63a617;
    FUN_00642c50(0x47,&local_cc);
    uStack_5c = local_cc;
    pwStack_60 = L"</shad>";
    uStack_64 = 0x63a632;
    FUN_00405330(&local_bc,3);
    pwStack_4c = L"쀳奚摙ႉ泌掦贀㢅\xffff\xe8ffꦒￜ薍＼\xffffʺ";
    FUN_00545088(*(undefined4 *)(local_8 + 0x424),local_bc);
  }
  pwVar1 = pwStack_40;
  *in_FS_OFFSET = local_48;
  pwStack_40 = L"幟譛工ￃ\xffff߿";
  uStack_44 = 0x63a65e;
  FUN_00404ff0(&local_cc,local_48,pwVar1);
  uStack_44 = 0x63a66e;
  FUN_004048f8(&local_c8,2);
  uStack_44 = 0x63a67e;
  FUN_00405008(&local_c0,4);
  uStack_44 = 0x63a68e;
  FUN_004048f8(&local_b0,2);
  uStack_44 = 0x63a69e;
  FUN_00405008(&local_a8,3);
  uStack_44 = 0x63a6a9;
  FUN_004048d4(&local_9c);
  uStack_44 = 0x63a6b9;
  FUN_00405008(&local_98,3);
  uStack_44 = 0x63a6c9;
  FUN_004048f8(&local_8c,2);
  uStack_44 = 0x63a6d1;
  FUN_00404ff0(&local_84);
  uStack_44 = 0x63a6d9;
  FUN_00404ff0(&local_1c);
  uStack_44 = 0x63a6e6;
  FUN_004048f8(&stack0xffffffec,2);
  uStack_44 = 0x63a6ee;
  FUN_00404ff0(&local_c);
  return;
}

