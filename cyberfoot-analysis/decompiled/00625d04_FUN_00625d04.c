// Address: 00625d04
// Machine-generated pseudocode; Delphi types and calling conventions may be inaccurate.

void FUN_00625d04(void)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  undefined4 local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_20 = &stack0xfffffffc;
  local_2c = &stack0xfffffffc;
  local_10 = 8;
  do {
    local_8 = 0;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_24 = &LAB_0062653e;
  local_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_28;
  local_30 = &LAB_00625e09;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x625d45;
  FUN_00653148("opcoes","opvelocidade",&local_8);
  local_38 = 0x625d4d;
  uVar3 = FUN_00409ff8(local_8);
  puVar1 = local_2c;
  switch(uVar3) {
  case 0:
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 3000;
    break;
  case 1:
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 2000;
    break;
  case 2:
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 0x5dc;
    break;
  case 3:
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 600;
    break;
  case 4:
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 300;
    break;
  case 5:
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 100;
    break;
  case 6:
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 0x32;
    break;
  default:
    *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 600;
  }
  *in_FS_OFFSET = local_34;
  if (*(int *)(PTR_DAT_0066ac78 + 200) == 100) {
    local_2c = (undefined1 *)0x625e35;
    cVar2 = FUN_00651f8c(PTR_DAT_0066ac78,local_34,puVar1);
    if (cVar2 == '\0') {
      *(undefined4 *)(PTR_DAT_0066ac78 + 200) = 300;
    }
  }
  local_30 = &LAB_00625f2c;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x625e68;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","opnhvelocidade",&local_c);
  local_38 = 0x625e70;
  uVar3 = FUN_00409ff8(local_c);
  puVar1 = local_2c;
  switch(uVar3) {
  case 0:
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 3000;
    break;
  case 1:
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 2000;
    break;
  case 2:
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 0x5dc;
    break;
  case 3:
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 600;
    break;
  case 4:
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 300;
    break;
  case 5:
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 0x32;
    break;
  case 6:
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 5;
    break;
  default:
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 600;
  }
  *in_FS_OFFSET = local_34;
  if (*(int *)(PTR_DAT_0066ac78 + 0xcc) == 10) {
    local_2c = (undefined1 *)0x625f58;
    cVar2 = FUN_00651f8c(PTR_DAT_0066ac78,local_34,puVar1);
    if (cVar2 == '\0') {
      *(undefined4 *)(PTR_DAT_0066ac78 + 0xcc) = 0x32;
    }
  }
  local_30 = &LAB_00625fce;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x625f8b;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","opintervalo",&local_10);
  local_38 = 0x625f93;
  iVar4 = FUN_00409ff8(local_10);
  if (iVar4 == 0) {
    PTR_DAT_0066ac78[0xd9] = 0;
  }
  else if (iVar4 == 1) {
    PTR_DAT_0066ac78[0xd9] = 1;
  }
  else {
    PTR_DAT_0066ac78[0xd9] = 1;
  }
  *in_FS_OFFSET = local_34;
  local_30 = &LAB_00626047;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x626004;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","op_verpenalty",&stack0xffffffec);
  local_38 = 0x62600c;
  iVar4 = FUN_00409ff8(unaff_EBX);
  if (iVar4 == 0) {
    PTR_DAT_0066ac78[0xda] = 0;
  }
  else if (iVar4 == 1) {
    PTR_DAT_0066ac78[0xda] = 1;
  }
  else {
    PTR_DAT_0066ac78[0xda] = 0;
  }
  *in_FS_OFFSET = local_34;
  local_30 = &LAB_006260c0;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x62607d;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","opvertrocatecnicos",&stack0xffffffe8);
  local_38 = 0x626085;
  iVar4 = FUN_00409ff8(unaff_ESI);
  if (iVar4 == 0) {
    PTR_DAT_0066ac78[0xd8] = 0;
  }
  else if (iVar4 == 1) {
    PTR_DAT_0066ac78[0xd8] = 1;
  }
  else {
    PTR_DAT_0066ac78[0xd8] = 1;
  }
  *in_FS_OFFSET = local_34;
  local_30 = &LAB_00626139;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x6260f6;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","opsom",&stack0xffffffe4);
  local_38 = 0x6260fe;
  iVar4 = FUN_00409ff8(unaff_EDI);
  if (iVar4 == 0) {
    PTR_DAT_0066ac78[0xdc] = 0;
  }
  else if (iVar4 == 1) {
    PTR_DAT_0066ac78[0xdc] = 1;
  }
  else {
    PTR_DAT_0066ac78[0xdc] = 1;
  }
  *in_FS_OFFSET = local_34;
  local_30 = &LAB_006261b2;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x62616f;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","opcontrato",&local_20);
  local_38 = 0x626177;
  iVar4 = FUN_00409ff8(local_20);
  if (iVar4 == 0) {
    PTR_DAT_0066ac78[0x10d] = 0;
  }
  else if (iVar4 == 1) {
    PTR_DAT_0066ac78[0x10d] = 1;
  }
  else {
    PTR_DAT_0066ac78[0x10d] = 1;
  }
  *in_FS_OFFSET = local_34;
  local_30 = &LAB_0062622b;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x6261e8;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","opcornalista",&local_24);
  local_38 = 0x6261f0;
  iVar4 = FUN_00409ff8(local_24);
  if (iVar4 == 0) {
    PTR_DAT_0066ac78[0xdb] = 0;
  }
  else if (iVar4 == 1) {
    PTR_DAT_0066ac78[0xdb] = 1;
  }
  else {
    PTR_DAT_0066ac78[0xdb] = 0;
  }
  *in_FS_OFFSET = local_34;
  local_30 = &LAB_006262a4;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x626261;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","opnegrito",&local_28);
  local_38 = 0x626269;
  iVar4 = FUN_00409ff8(local_28);
  if (iVar4 == 0) {
    PTR_DAT_0066ac78[0xdd] = 0;
  }
  else if (iVar4 == 1) {
    PTR_DAT_0066ac78[0xdd] = 1;
  }
  else {
    PTR_DAT_0066ac78[0xdd] = 0;
  }
  *in_FS_OFFSET = local_34;
  local_30 = &LAB_0062631d;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x6262da;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","opescalacao",&local_2c);
  local_38 = 0x6262e2;
  iVar4 = FUN_00409ff8(local_2c);
  if (iVar4 == 0) {
    PTR_DAT_0066ac78[0xde] = 0;
  }
  else if (iVar4 == 1) {
    PTR_DAT_0066ac78[0xde] = 1;
  }
  else {
    PTR_DAT_0066ac78[0xde] = 1;
  }
  *in_FS_OFFSET = local_34;
  local_30 = &LAB_00626371;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x626353;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","opsalvar",&local_30);
  local_38 = 0x62635b;
  uVar3 = FUN_00409ff8(local_30);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xd0) = uVar3;
  *in_FS_OFFSET = local_34;
  local_30 = &LAB_006263c6;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x6263a8;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes","opemails",&local_34);
  local_38 = 0x6263b0;
  uVar3 = FUN_00409ff8(local_34);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xe0) = uVar3;
  *in_FS_OFFSET = local_34;
  if (3 < *(int *)(PTR_DAT_0066ac78 + 0xd0)) {
    *(undefined4 *)(PTR_DAT_0066ac78 + 0xd0) = 0;
  }
  local_30 = &LAB_006264ce;
  local_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_34;
  local_38 = 0x626418;
  local_2c = &stack0xfffffffc;
  FUN_00653148("opcoes",&DAT_00626668,&local_38);
  uVar3 = local_38;
  local_38 = 0x626420;
  uVar3 = FUN_00429ecc(uVar3);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xe4) = uVar3;
  local_38 = 0x62643e;
  FUN_00653148("opcoes",&DAT_00626678,&local_3c);
  local_38 = 0x626446;
  uVar3 = FUN_00429ecc(local_3c);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xe8) = uVar3;
  local_38 = 0x626464;
  FUN_00653148("opcoes",&DAT_00626688,&local_40);
  local_38 = 0x62646c;
  uVar3 = FUN_00429ecc(local_40);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xec) = uVar3;
  local_38 = 0x62648a;
  FUN_00653148("opcoes",&DAT_00626698,&local_44);
  local_38 = 0x626492;
  uVar3 = FUN_00429ecc(local_44);
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xf0) = uVar3;
  local_38 = 0x6264b0;
  FUN_00653148("opcoes",&DAT_006266a8,&local_48);
  local_38 = 0x6264b8;
  uVar3 = FUN_00429ecc(local_48);
  puVar1 = local_20;
  *(undefined4 *)(PTR_DAT_0066ac78 + 0xf4) = uVar3;
  *in_FS_OFFSET = local_34;
  *in_FS_OFFSET = local_28;
  local_20 = &LAB_00626545;
  local_24 = (undefined1 *)0x62653d;
  FUN_004048f8(&local_48,0x11,puVar1);
  return;
}

